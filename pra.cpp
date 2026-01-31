class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n =nums.size();
        int min=nums[0];
        int max=nums[n-1];
        if(max==min) return 0;
        int cnt=0;
        for(int i =1;i<=n-2;i++){
            if(nums[i]>min && nums[i]<max){
         cnt++;
            }else{
                continue;
            }
        }
        return cnt;
    }
};