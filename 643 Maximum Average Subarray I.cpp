class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int r = 0;
        int l = 0;
        double sum = 0;
        int currsize = 0;
        double ans = -1e9;
           
        while (r < nums.size()) { 
            sum += nums[r]; 
            currsize++; 
            
            if (currsize == k) { 
                ans = max(ans, sum / k); 
                
                sum -= nums[l]; 
                l++;
                currsize--; 
            } 
            r++; 
        } 
        return ans; 
    }
};


// class Solution { 
// public: 
//     double findMaxAverage(vector<int>& nums, int k) { 
//         int r = 0; 
//         int l = 0; 
//         double avg = 0; 
//         int currsize = 0; 
        
//         // Error Fix 1: Initialize to a tiny number so it works with negative results
//         double ans = -1e9; 
        
//         while (r < nums.size()) { 
//             if (currsize < k) { 
//                 // Error Fix 2: Changed '- 1' to '+ nums[r]'. Added a check for currsize == 0 to prevent dividing by 0.
//                 avg = (currsize == 0) ? nums[r] : ((avg * currsize) + nums[r]) / (currsize + 1); 
//             } 
            
//             // Error Fix 3: Added 'if (currsize + 1 == k)' to catch the window size right after 'avg' updates
//             if (currsize + 1 == k) { 
//                 ans = max(avg, ans); 
                
//                 // Error Fix 4: Correctly subtract nums[l] from the average before moving the pointer
//                 avg = (currsize == 0) ? 0 : ((avg * (currsize + 1)) - nums[l]) / currsize;
                
//                 // Error Fix 5: Changed 'l--' to 'l++' to slide the window forward
//                 l++; 
//                 currsize--; 
//             } 
//             r++; 
//             currsize++; 
//         } 
//         return ans; 
//     } 
// };
