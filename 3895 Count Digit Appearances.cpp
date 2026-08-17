class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int totalCount = 0;

        for (int num : nums) {
            if (num == 0 && digit == 0) {
                totalCount++;
                continue;
            }

            while (num > 0) {
                int currentDigit = num % 10;
                if (currentDigit == digit) {
                    totalCount++;
                }
                num /= 10;
            }
        }

        return totalCount; 
    }
};
