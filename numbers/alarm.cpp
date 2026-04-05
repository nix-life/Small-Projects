/*
1.11 Alarm Clock

A simple clock where it plays a sound after X number of minutes/seconds or at a particular time.
*/

#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include <chrono>
#include <thread>

// Link the winmm library
#pragma comment(lib, "winmm.lib")

int main() {
    std::cout << "How long would you like to set your timer (in seconds)? ";
    int seconds;
    std::cin >> seconds;

    while (seconds <= 0) {
        std::cout << "Please enter a positive number of seconds.\n";
        std::cin >> seconds;
    }

    for (int remaining = seconds; remaining > 0; remaining--) {
        std::cout << "\rTime left: " << remaining << "s " << std::flush;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    std::cout << "\rTime left: 0s\n";
    std::cout << "Time is up!\n";

    // Play custom sound if available; otherwise fall back to a system beep.
    if (!PlaySound(TEXT("sound.wav"), NULL, SND_FILENAME | SND_ASYNC)) {
        Beep(1200, 700);
    }

    return 0;
}
