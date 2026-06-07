class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l = 0;
        int r = 0;
          if (k <= 1) return 0; 
        long long prod = 1;
        int count = 0;
        while (r < nums.size()) {
            prod = prod * nums[r];
            while (prod >=k) {
                prod = prod / nums[l];
                l=l+1;
            }
            count = count + (r - l + 1);
            r = r + 1;
        }
        return count;
    }
};