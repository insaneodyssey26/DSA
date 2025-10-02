class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j) {
        int m = grid.size(), n = grid[0].size();
        if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == '0')
            return;
        
        grid[i][j] = '0'; 

        dfs(grid, i + 1, j); //down
        dfs(grid, i - 1, j); //up
        dfs(grid, i, j + 1); //right
        dfs(grid, i, j - 1); //left
    }
    
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;
        int count = 0;
        int m = grid.size(), n = grid[0].size();
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    count++;
                    dfs(grid, i, j);
                }
            }
        }
        return count;
    }
};
