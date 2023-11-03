#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numVertices = 5; // Number of vertices in the graph
    vector<  vector<int> > adjacencyMatrix(numVertices, vector<int>(numVertices, 0)   );

    // Adding edges to the graph
    adjacencyMatrix[0][1] = 1;
    adjacencyMatrix[0][2] = 1;
    adjacencyMatrix[1][3] = 1;
    adjacencyMatrix[2][4] = 1;

    // Printing the adjacency matrix
    for (int i = 0; i < numVertices; ++i) {
        for (int j = 0; j < numVertices; ++j) {
            cout << adjacencyMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
