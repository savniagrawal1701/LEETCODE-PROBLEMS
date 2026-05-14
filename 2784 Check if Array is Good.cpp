class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = *max_element(nums.begin(), nums.end());
        vector<int> base(n + 1, 0);
        for (int i = 0; i < n; i++) {
            base[i] = i + 1;
        }
        base[n] = n;
        sort(nums.begin(), nums.end());
        if (nums.size() != base.size()) {
            return false;
        } else {
            for (int k = 0; k < nums.size(); k++) {
                if (nums[k] == base[k]) {
                    continue;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};
