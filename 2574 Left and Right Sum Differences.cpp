class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n, 0);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + nums[i];
        }
        int rsum = sum - nums[0];
        int lsum = 0;
        ans[0] = abs(lsum - rsum);
        for (int i = 1; i < n; i++) {

            lsum = lsum + nums[i - 1];
            rsum = rsum - nums[i];
            ans[i] = abs(lsum - rsum);
        }

        return ans;
    }
};
