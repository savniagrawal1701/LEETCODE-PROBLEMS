// we iterate in grid and stop when 1 is found and we check its surrounding if
// the surrounding has zeroes thn we add it in sum the no of zeroes found
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        int rows = grid.size();
        int cols = grid[0].size();

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (grid[i][j] == 1) {
                    perimeter += 4;
                    // when we are cheking for up box then we need to see ki kya
                    // i <0 toh nhi ho raha
                    if (i > 0 && i + 1 <= rows && grid[i - 1][j] == 1) {
                        perimeter -= 1;
                    }

                    // idhar i can be equal to 0 as we are checing for downward
                    // box so check karte time ye rows se zayda na jaaye woh
                    // check karna hai ki neeche box he na ho or ham check kar arhe hai 
                    if (i >= 0 && i + 1 < rows && grid[i + 1][j] == 1) {
                        perimeter -= 1;
                    }
                    if (j > 0 && j + 1 <= cols && grid[i][j - 1] == 1) {
                        perimeter -= 1;
                    }
                    if (j >= 0 && j + 1 < cols && grid[i][j + 1] == 1) {
                        perimeter -= 1;
                    }
                }
            }
        }
        return perimeter;
    }
};
