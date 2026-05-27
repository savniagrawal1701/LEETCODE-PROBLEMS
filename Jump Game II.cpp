class Solution {
public:
    int jump(vector<int>& nums) {
       int n = nums.size();
    vector<int> dp(n, INT_MAX);
    dp[n-1] = 0;                    // base case

    for(int ind = n-2; ind >= 0; ind--) {
        for(int j = 1; j <= nums[ind]; j++) {
            if(ind + j >= n) break;
            if(dp[ind + j] != INT_MAX)
                dp[ind] = min(dp[ind], 1 + dp[ind + j]);
        }
    }
    return dp[0];
    }
};
