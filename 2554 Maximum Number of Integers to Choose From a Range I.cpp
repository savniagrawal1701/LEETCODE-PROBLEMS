class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        //easily mil jayega map se ..array mea find karna mushkil hota 
        unordered_set<int> mpp(banned.begin(), banned.end());
        
        int count = 0;
        int current_sum = 0;
        
        
        for (int i = 1; i <= n; i++) {
            //skip it if in map 
            if (mpp.find(i) != mpp.end()) {
                continue;
            }
            
            //we are iterating from 1 to n ..we are not itertaing in map 
            if (current_sum + i > maxSum) {
                break; 
            }
            
            current_sum += i;
            count++;
        }
        
        return count;
    }
};
