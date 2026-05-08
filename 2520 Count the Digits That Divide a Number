class Solution {
public:
    int countDigits(int num) {
            int count = 0;
    int temp = num; // Store original number to iterate through digits

    while (temp > 0) {
        int digit = temp % 10; 
        if (digit != 0 && num % digit == 0) {
            count++;
        }
        
        temp /= 10; 
    }
    
    return count;

    }
};
