#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>  
#include <queue>

using namespace std;

#define INF 1e9

struct Edge {
    int from;
    int to;
    int weight;
};

vector<vector<pair<int, int>>> graph;
vector<int> distances;

void dijkstra(int start) {
    distances.assign(graph.size(), INF);
    distances[start] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int dist, u;
        tie(dist, u) = pq.top();
        pq.pop();

        if (distances[u] < dist) continue;

        for (size_t i = 0; i < graph[u].size(); i++) {
            int v = graph[u][i].first;
            int w = graph[u][i].second;

            int new_dist = dist + w;
            if (new_dist < distances[v]) {
                distances[v] = new_dist;
                pq.push({new_dist, v});
            }
        }
    }
}

int main() {
    int num_locations, num_roads;
    cin >> num_locations >> num_roads;

    graph.resize(num_locations);

    for (int i = 0; i < num_roads; i++) {
        int from, to, weight;
        cin >> from >> to >> weight;

        graph[from].push_back({to, weight});
        graph[to].push_back({from, weight});
    }

    int pizza_location;
    cin >> pizza_location;

    dijkstra(0);

    int total_time = 0;
    for (int i = 1; i < num_locations; i++) {
        if (i == pizza_location) continue;

        total_time += distances[i] * 2;
    }

    cout << total_time << endl;

    return 0;
}