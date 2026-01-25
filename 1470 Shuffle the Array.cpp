//Shuffle the array
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int i=0;
        for(int j =n;j<nums.size();j++){
         ans.push_back(nums[i]);
         ans.push_back(nums[j]);
         i++;
        }
        return ans;
    }
};
