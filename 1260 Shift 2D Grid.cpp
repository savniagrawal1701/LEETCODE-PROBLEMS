class Solution {
public: 
   
    void operation(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        vector<vector<int>> temp = grid;
        
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (j + 1 < c) {
                    grid[i][j + 1] = temp[i][j];
                } else if (i + 1 < r) {
                    grid[i + 1][0] = temp[i][j];
                } else {
                    grid[0][0] = temp[i][j];
                }
            }
        }
    }

    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int r = grid.size();
        int c = grid[0].size();

        k = k % (r * c); 
        
        for (int i = 1; i <= k; i++) {
            operation(grid);
        }
        return grid;
    }
};
