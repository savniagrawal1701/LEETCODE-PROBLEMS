class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        // since element cover 50% of the array .the element apperaing n times
        // cannot be 2 indixes apart we cannot do n/2 times wali cheez as count
        // =0 ho jayega ele nhi milega
      int n =nums.size();
        int ans=0;
        for (int i = 0; i <nums.size()-1; i++) {
            if (nums[i] == nums[i + 1] ) {
                ans =nums[i];
            }
        }
        for (int i = 0; i <nums.size()-2; i++) {
            if ( nums[i] == nums[i + 2]) {
                ans =nums[i];
            }
        }
        if(nums[0]==nums[n-1]) return nums[0];
        return ans;
    }
};
