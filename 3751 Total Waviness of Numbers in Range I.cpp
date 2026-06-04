class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int w = 0;
        for (int i = num1; i <= num2; i++) {
            int n = i;
            
            
            if (n < 100) continue; 
            
            int next = n % 10;
            n = n / 10;
            int curr = n % 10;
            n = n / 10;
            
            
            while (n > 0) {
                int prev = n % 10;
                n = n / 10;
        
                if (curr > prev && curr > next) {
                    w++;
                }
                else if (curr < prev && curr < next) {
                    w++;
                }
                
                
                next = curr;
                curr = prev;
            }
        }
        return w;
    }
};
