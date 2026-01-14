class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int low=0;
        int high=nums.size();
       while(low<=high){
     
        int mid=low+(high-low)/2;
        if(nums[mid-1]==nums[mid] && nums[mid+1]>nums[mid]){
            low=mid-1;
        }
        else if (nums[mid-1]<nums[mid] && nums[mid+1]==nums[mid]) {
            high=mid+1;
        }
      
       }
       return nums[low];
    }
};
