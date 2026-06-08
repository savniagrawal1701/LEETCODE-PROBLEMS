class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int r = 0;
        int l = 0;
        int sum = 0;
        int mini = INT_MAX;
        while (r < nums.size() && l <= r) {
            sum = sum + nums[r];
            while (sum >= target) {
                mini = min(r - l + 1, mini);
                sum=sum-nums[l];
                l=l+1;
                
            }
            r++;
        }
       if(mini ==INT_MAX)return 0;
       return mini;
    }
};