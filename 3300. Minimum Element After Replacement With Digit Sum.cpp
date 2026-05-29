class Solution {
public:
    int sumdigit(int n) {

        int sum = 0;

        while (n > 0) {
            int a = n % 10;
            sum = sum + a;

            n = n / 10;
        }

        return sum;
    }
    int minElement(vector<int>& nums) {
        int mini = INT_MAX;
        for (int i =0; i < nums.size(); i++) {
            int sum = sumdigit(nums[i]);
            mini = min(mini, sum);
        }
        return mini;
    }
};
