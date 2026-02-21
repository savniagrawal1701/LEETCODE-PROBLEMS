class Solution {
public:
    int countSetBits(int n) {
        int count = 0;
        while (n != 0) {
            n = n & (n - 1);
            count++; // Increment the count
        }
        return count;
    }

    int countPrimeSetBits(int left, int right) {
        int count1 = 0;
        for (int i = left; i <= right; i++) {
            int ans = countSetBits(i);
            if (ans == 2 || ans == 3 || ans == 5 || ans == 7 || ans == 11 ||
                ans == 13 || ans == 17 || ans == 19) {
                count1++;
            }
        }
        return count1;
    }
};
