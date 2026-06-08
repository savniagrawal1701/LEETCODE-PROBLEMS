class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> s;
        int equal=0;
        vector<int> b;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==pivot){
                equal++;
            }
            else if(nums[i]<pivot){
                s.push_back(nums[i]);
            }
            else{
                b.push_back(nums[i]);
            }
        }
  s.insert(s.end(), equal, pivot);

        s.insert(s.end(), b.begin(), b.end());

        return s;
    }
};