#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>>& adjacencyMatrix, vector<bool>& visited, int startNode) {
    visited[startNode] = true;
    cout << "Visited node: " << startNode << endl;

    for (int i = 0; i < adjacencyMatrix.size(); i++) {
       
        if (adjacencyMatrix[startNode][i] == 1 && !visited[i]) {
            dfs(adjacencyMatrix, visited, i);
        }
    }
}

int main() {
    int numVertices = 6;
    vector<vector<int>> adjacencyMatrix = {
        {0, 1, 1, 0, 0, 0},
        {1, 0, 0, 1, 1, 0},
        {1, 0, 0, 0, 0, 1},
        {0, 1, 0, 0, 1, 0},
        {0, 1, 0, 1, 0, 0},
        {0, 0, 1, 0, 0, 0}
    };

    vector<bool> visited(numVertices, false);

    

    cout << "Depth-First Search starting from node 0:" << endl;
    dfs(adjacencyMatrix, visited, 0);

    return 0;
}
