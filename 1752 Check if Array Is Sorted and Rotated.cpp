class Solution {
public:
    bool check(vector<int>& nums) {
        int n =nums.size();
        vector<int> A = nums;
        sort(A.begin(), A.end());
        int mini= nums[0];
        int k=0;
        for (int i = 0; i < n; i++) {
           if (nums[i] < mini || (nums[i] == mini && i > 0 && nums[i] < nums[i - 1])) { 
                mini = nums[i]; 
                k = i; 
            } 
        }
        for (int i = 0; i < n; i++) {
            if(nums[i] == A[(i +n-k) % A.size()]){
                continue;
            }else{
                return false;
            }
        }
        return true;
    }
