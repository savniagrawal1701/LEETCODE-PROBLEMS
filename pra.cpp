class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for (int current_num : nums) {
            vector<int> divisors;
            for (int i = 1; i * i <= current_num; ++i) {
                if (current_num % i == 0) {
                    divisors.push_back(i);
                    if (i * i != current_num) {
                        divisors.push_back(current_num / i);
                    }
                }
            }
            if(divisors.size()==4) {
                sum+=accumulate(divisors.begin(), divisors.end(), 0);
            }
        }
         return sum; 
    }
};