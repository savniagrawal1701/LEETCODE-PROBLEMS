class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> hash(101, 0);
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
        }
        int total = 0;

        for (int i = 1; i <= 100; i++) {
            int n = hash[i];
            total = (n * (n - 1) / 2) + total;
        }
        return total;
    }
};