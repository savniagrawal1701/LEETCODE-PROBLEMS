class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        if(n==3){
            return nums[0]*nums[1]*nums[2];
        }
        sort(nums.begin(),nums.end());
maxi=max(nums[n-1]*nums[n-2]*nums[n-3], nums[0]*nums[1]*nums[n-1]);//second case we have mix of neg and pos 
return maxi;
    }
};
