class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        int tc = 0;
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = i; j < n; j++) {
              
                if (nums[j] == target) {
                    count++;
                }
                int subarray_size = j - i + 1;
                if (count > subarray_size / 2) {
                    tc++;
                }
            }
        }
        return tc;
    }
};
