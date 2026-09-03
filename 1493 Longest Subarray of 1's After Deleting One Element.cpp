class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int r=0;
        int l=0;
        int count=0;

        int maxi=-1;
        while(r<nums.size()){
            if(nums[r]!=1){
                count++;
            }
            while(count>1){
               if (nums[l] != 1) { 
                    count--; 
                }
                l++; 
            }
           
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi-1;
    }
};
