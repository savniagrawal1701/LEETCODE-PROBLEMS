class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
           int l = 0;
        int r = 0;
        long long sum = 0;       
        long long count = 0;     

        while (r < nums.size()) {
            sum += nums[r];      
            
            
            while(sum * (r - l + 1) >= k) {
                sum -= nums[l];  
                l = l + 1;       
            }
            
            count = count + (r - l + 1);
            r = r + 1;
        }
        return count;

    }
};
