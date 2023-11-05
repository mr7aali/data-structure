#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>

using namespace std;

void bfs(const vector<vector<int> > &graph, int startNode, int vertex) {
    vector<bool> visited(vertex , false);
    queue<int> q;
    q.push(startNode);
    visited[startNode] = true;

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        cout << current << " ";

        for (int neighbor = 0; neighbor < vertex; ++neighbor) {
            if (graph[current][neighbor] == 1 && !visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

int main() {
    int vertex, edge;
    cin >> vertex >> edge;

    vector<vector<int> > graph(vertex , vector<int>(vertex + 1, 0));

    for (int i = 0; i < edge; ++i) {
        int v, u;
        cin >> v >> u;
        graph[v][u] = 1;
        //graph[u][v] = 1;
    }

 //   for (int i = 0; i <= vertex; i++) graph[0][i] = i;
  //  for (int i = 0; i <= vertex; i++) graph[i][0] = i;

    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < vertex; i++) {
        for (int j = 0; j < vertex; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    int startNode;
    cout << "Enter the starting node for BFS: ";
    cin >> startNode;

    cout << "BFS starting from node " << startNode << ": ";
    bfs(graph, startNode, vertex);

    return 0;
}
