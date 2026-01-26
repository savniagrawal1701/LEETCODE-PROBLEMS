class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        int n =nums.size();
        vector<int> hash(n+1,0);
        for(int i =0;i<n;i++){
            hash[nums[i]]+=1;
        }
        int dup=0;
        int miss=0;
        for(int i =1;i<=n;i++){
            if(hash[i]==2){
                dup=i;
            }
            else if(hash[i]==0){
                miss=i;
            }
           
        }
    
        return {dup,miss};
    }
};