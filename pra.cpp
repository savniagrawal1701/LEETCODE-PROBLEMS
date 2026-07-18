class Solution {
public:
    int dpfxn(vector<int>& cost, int ind) {
        vector<int> dp(cost.size()+1, 0);

        for (int i = 2; i <= ind; i++) {
            int left = cost[i - 1] + dp[i - 1];
            int right = cost[i - 2] + dp[i - 2];

            dp[i] = min(left, right);
        }
        return dp[ind];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

        return dpfxn(cost, n);
    }
};