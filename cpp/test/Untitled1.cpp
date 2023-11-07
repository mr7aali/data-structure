
#include <iostream>
#include <vector>

using namespace std;

// Function to check if a cell is valid
bool isValid(int x, int y, int N) {
    return (x >= 0 && x < N && y >= 0 && y < N);
}

// Function to perform DFS to explore War Eagle colonies
void dfs(int x, int y, vector<vector<int>>& grid, vector<vector<bool>>& visited) {
    // Define possible neighboring directions
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    visited[x][y] = true;

    // Explore all neighboring cells
    for (int i = 0; i < 8; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];
        if (isValid(newX, newY, grid.size()) && grid[newX][newY] == 1 && !visited[newX][newY]) {
            dfs(newX, newY, grid, visited);
        }
    }
}

int countWarEagleColonies(int N, vector<vector<int>>& grid) {
    vector<vector<bool> > visited(N, vector<bool>(N, false));
    int colonyCount = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (grid[i][j] == 1 && !visited[i][j]) {
                // Found the start of a new colony
                dfs(i, j, grid, visited);
                colonyCount++;
            }
        }
    }

    return colonyCount;
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> grid(N, vector<int>(N));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    int colonyCount = countWarEagleColonies(N, grid);
    cout << colonyCount << endl;

    return 0;
}
