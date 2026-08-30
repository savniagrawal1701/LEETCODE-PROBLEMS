class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mini = 0;
        int maxi = 0;
        
        
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[mini]) {
                mini = i;
            }
            if (nums[i] > nums[maxi]) {
                maxi = i;
            }
        }
        
        
        int left = min(mini, maxi);
        int right = max(mini, maxi);
        
        
        int del_from_front = right + 1;
        int del_from_back = n - left;
        int del_both_sides = (left + 1) + (n - right);
        
        
        return min({del_from_front, del_from_back, del_both_sides});
    }
};
