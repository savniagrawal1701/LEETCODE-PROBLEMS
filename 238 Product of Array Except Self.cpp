class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> preprod(n, 1);
        vector<int> suffprod(n, 1);
        vector<int> res(n, 0);
        
        // 1. Prefix Loop
        for(int i = 0; i < n; i++){
            if(i == 0) {
                preprod[i] = nums[i];
            } else {
                preprod[i] = preprod[i-1] * nums[i];
            }
        }
        
        // 2. Suffix Loop
        for(int i = n - 1; i >= 0; i--){
            if(i == n - 1) {
                suffprod[i] = nums[n - 1];
            } else {
                suffprod[i] = suffprod[i+1] * nums[i];
            }
            
            // 3. Your If-Else Math Block (Now correctly inside the loop)
            int left;
            if (i == 0) {
                left = 1;
            } else {
                left = preprod[i-1];
            }

            int right;
            if (i == n - 1) {
                right = 1;
            } else {
                right = suffprod[i+1];
            }

            res[i] = left * right;
        }
        
        return res;
    }
};
