//toggle each row if first element of row doesn`t start with 1
// you will change highest bit from 0 to 1 and that means increase of binary number that is represented as row
// at the end we want all our numbers (rows) to start with 1
// if column has more 0 than 1 - also swap elements
// so we will get more 1 in same bit (and that will lead to increase of total sum)
class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n =grid.size();
        int m=grid[0].size();
      for (int i = 0; i < n; i++) {
    if (grid[i][0] == 0) { // If the row starts with 0
        for (int j = 0; j < m; j++) { // Flip the ENTIRE row
            if (grid[i][j] == 0) {
                grid[i][j] = 1;
            } else {
                grid[i][j] = 0;
            }
        }
    }
}
       for (int j = 1; j < m; j++) {
            int colOnes = 0;
            int colZeros = 0;
            
           
            for (int i = 0; i < n; i++) {
                if (grid[i][j] == 1) {
                    colOnes++;
                } else {
                    colZeros++;
                }
            }
            
     
            if (colZeros > colOnes) { 
                for (int i = 0; i < n; i++) {
                    if (grid[i][j] == 0) {
                        grid[i][j] = 1;
                    } else {
                        grid[i][j] = 0;
                    }
                }
            }
        }
      
        int totalScore = 0;
        for (int i = 0; i < n; i++) {
            int rowValue = 0;
            for (int j = 0; j < m; j++) {
                rowValue = (rowValue * 2) + grid[i][j];
            }
            totalScore += rowValue;
        }
        
        return totalScore;
    }
};
