class Solution {
public:
    bool dfs(int i, int j, vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        // If we hit the border, it's not closed
        if (i < 0 || j < 0 || i >= n || j >= m) return false;

        // If water or already visited
        if (grid[i][j] == 1) return true;

        // Mark as visited
        grid[i][j] = 1;

        // Check all 4 directions
        bool up = dfs(i - 1, j, grid);
        bool down = dfs(i + 1, j, grid);
        bool left = dfs(i, j - 1, grid);
        bool right = dfs(i, j + 1, grid);

        // This land is part of a closed island only if all directions are closed
        return up && down && left && right;
    }

    int closedIsland(vector<vector<int>>& grid) {
        int count = 0;
        int n = grid.size();
        int m = grid[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 0) {
                    if (dfs(i, j, grid)) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
