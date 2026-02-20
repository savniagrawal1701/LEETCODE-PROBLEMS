class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int > hash(nums.size(),0);
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        for(int i =0;i<nums.size();i++){
            if(hash[i]==2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};