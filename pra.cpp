#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    long long findGCD(long long a, long long b) {
        return gcd(a, b);
    }

    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<long long> prefixGcd(n);
        
        int currentMax = nums[0];
        
        for (int i = 0; i < n; i++) {
            currentMax = max(currentMax, nums[i]);
            prefixGcd[i] = findGCD(nums[i], currentMax);
        }
        
        sort(prefixGcd.begin(), prefixGcd.end());
        
        long long sum = 0;
        int l = 0;
        int r = n - 1;
        
        while (l < r) {
            sum += findGCD(prefixGcd[l], prefixGcd[r]);
            l++;
            r--;
        }
        
        return sum;
    }
};
