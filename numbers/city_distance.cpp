/*
1.12 Distance Between Two Cities

Calculates the distance between two cities and allows the user to specify a unit of distance. This program may require finding coordinates of the cities like latitude and longitude.
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <limits>
#include <cmath>

// Credit to geeksforgeeks for haversine formula
static double haversine(double lat1, double lon1,
                        double lat2, double lon2)
    {
        // distance between latitudes
        // and longitudes
        double dLat = (lat2 - lat1) *
                      M_PI / 180.0;
        double dLon = (lon2 - lon1) * 
                      M_PI / 180.0;

        // convert to radians
        lat1 = (lat1) * M_PI / 180.0;
        lat2 = (lat2) * M_PI / 180.0;

        // apply formulae
        double a = pow(sin(dLat / 2), 2) + 
                   pow(sin(dLon / 2), 2) * 
                   cos(lat1) * cos(lat2);
        double rad = 6371;
        double c = 2 * asin(sqrt(a));
        return rad * c;
    }

/*
id, country, city, latitude, longitude, altitude
*/
struct City {
    std::string id;
    std::string country;
    std::string city;
    double latitude;
    double longitude;
    double altitude;
};

bool parseDouble(const std::string& input, double& output) {
    std::size_t start = 0;
    while (start < input.size() && std::isspace(static_cast<unsigned char>(input[start]))) {
        ++start;
    }

    std::size_t end = input.size();
    while (end > start && std::isspace(static_cast<unsigned char>(input[end - 1]))) {
        --end;
    }

    if (start == end) {
        return false;
    }

    const std::string trimmed = input.substr(start, end - start);
    std::size_t parsedChars = 0;

    try {
        output = std::stod(trimmed, &parsedChars);
    } catch (...) {
        return false;
    }

    return parsedChars == trimmed.size();
}

std::string cleanField(const std::string& input) {
    std::size_t start = 0;
    while (start < input.size() && std::isspace(static_cast<unsigned char>(input[start]))) {
        ++start;
    }

    std::size_t end = input.size();
    while (end > start && std::isspace(static_cast<unsigned char>(input[end - 1]))) {
        --end;
    }

    if (end - start >= 2 && input[start] == '"' && input[end - 1] == '"') {
        ++start;
        --end;
    }

    return input.substr(start, end - start);
}

std::string normalizeCityName(const std::string& input) {
    std::size_t start = 0;
    while (start < input.size() && std::isspace(static_cast<unsigned char>(input[start]))) {
        ++start;
    }

    std::size_t end = input.size();
    while (end > start && std::isspace(static_cast<unsigned char>(input[end - 1]))) {
        --end;
    }

    std::string out;
    out.reserve(end - start);

    bool lastWasSpace = false;
    for (std::size_t i = start; i < end; ++i) {
        unsigned char ch = static_cast<unsigned char>(input[i]);
        if (std::isspace(ch)) {
            if (!lastWasSpace) {
                out.push_back(' ');
                lastWasSpace = true;
            }
        } else {
            out.push_back(static_cast<char>(std::tolower(ch)));
            lastWasSpace = false;
        }
    }

    if (!out.empty() && out.back() == ' ') {
        out.pop_back();
    }

    return out;
}

const City* findCityByName(const std::vector<City>& cities, const std::string& userInput) {
    const std::string target = normalizeCityName(userInput);
    for (const City& c : cities) {
        if (normalizeCityName(c.city) == target) {
            return &c;
        }
    }
    return nullptr;
}

int main() {
    // Open data file from either repo root or numbers/ working directory.
    std::ifstream file("data/World_Cities_Location_table.csv");
    if (!file.is_open()) {
        file.open("../data/World_Cities_Location_table.csv");
    }

    if (!file.is_open()) {
        std::cout << "Error opening file";
        return 1;
    }

    std::vector<City> cities;
    std::string line;

    int skippedRows = 0;

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string id, country, cityStr, latitudeStr, longitudeStr, altitudeStr;

        std::getline(ss, id, ';');
        std::getline(ss, country, ';');
        std::getline(ss, cityStr, ';');
        std::getline(ss, latitudeStr, ';');
        std::getline(ss, longitudeStr, ';');
        std::getline(ss, altitudeStr, ';');

        id = cleanField(id);
        country = cleanField(country);
        cityStr = cleanField(cityStr);
        latitudeStr = cleanField(latitudeStr);
        longitudeStr = cleanField(longitudeStr);
        altitudeStr = cleanField(altitudeStr);

        City city;
        city.id = id;
        city.country = country;
        city.city = cityStr;

        if (!parseDouble(latitudeStr, city.latitude)
            || !parseDouble(longitudeStr, city.longitude)
            || !parseDouble(altitudeStr, city.altitude)) {
            ++skippedRows;
            continue;
        }

        cities.push_back(city);
    }

    file.close();

    /* 
    Testing output
    for (const City& c : cities) {
        std::cout << c.city << " "
                << c.latitude << " "
                << c.longitude << "\n";
    }

    if (skippedRows > 0) {
        std::cout << "Skipped malformed rows: " << skippedRows << "\n";
    }
    */

    // Input and city lookup
    std::string city1Input, city2Input;
    std::string unit;

    std::cout << "Please enter the first city: ";
    std::getline(std::cin >> std::ws, city1Input);

    std::cout << "Please enter the second city: ";
    std::getline(std::cin, city2Input);

    const City* city1 = findCityByName(cities, city1Input);
    const City* city2 = findCityByName(cities, city2Input);

    if (!city1 || !city2) {
        if (!city1) {
            std::cout << "City not found: " << city1Input << "\n";
        }
        if (!city2) {
            std::cout << "City not found: " << city2Input << "\n";
        }
        return 1;
    }

    std::cout << "Found cities:\n";
    std::cout << city1->city << " (" << city1->latitude << ", " << city1->longitude << ")\n";
    std::cout << city2->city << " (" << city2->latitude << ", " << city2->longitude << ")\n";
    std::cout << "Total distance: " << haversine(city1->latitude, city1->longitude,
                                                 city2->latitude, city2->longitude) << "KM." << "\n";

    

    return 0;
}
