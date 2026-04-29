class Solution {
public:
    int countEven(int num) {
         int evenDigitSumCount = 0;
      
        for (int currentNumber = 1; currentNumber <= num; ++currentNumber) {
            int digitSum = 0;
          
            // Calculate the sum of digits for the current number
            for (int temp = currentNumber; temp > 0; temp /= 10) {
                digitSum += temp % 10; 
            }
          
            if (digitSum % 2 == 0) {
                evenDigitSumCount++;
            }
        }
      
        return evenDigitSumCount;
    }
};
