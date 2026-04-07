/*
1.15 Dijkstras Algorithm

Create a program that finds the shortest path through a graph using its edges.
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <climits>

std::vector<int> dijkstra(std::vector<std::vector<std::pair<int, int>>>& adj, int source) {
    int size = adj.size();
    std::vector<int> dist(size, INT_MAX);
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;

    dist[source] = 0;
    pq.emplace(source, 0);

    while (!pq.empty()) {
        auto top = pq.top();
        pq.pop();

        int cur_dist = top.first;
        int cur_small = top.second;
        
        if (cur_dist > dist[cur_small]) continue;

        for (auto &p : adj[cur_small]) {
            int v = p.first;
            int cost = p.second;

            if (dist[cur_small] + cost < dist[v]) {
                dist[v] = dist[cur_small] + cost;
                pq.emplace(dist[v], v);
            }
            
        }

    }

    return dist;
}

int main() {

    int src = 0;

    std::vector<std::vector<std::pair<int,int>>> adj(5);
    adj[0] = {{1,4}, {2,8}};
    adj[1] = {{0,4}, {4,6}, {2,3}};
    adj[2] = {{0,8}, {3,2}, {1,3}};
    adj[3] = {{2,2}, {4,10}};
    adj[4] = {{1,6}, {3,10}};

    std::vector<int> result = dijkstra(adj, src);

    for (int d : result)
        std::cout << d << " ";
    std::cout << " ";


    return 0;
}
