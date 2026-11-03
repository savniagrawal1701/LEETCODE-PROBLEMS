class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n =nums.size();
        int maxi=-1;
        int moves=0;
        for(int i =0;i<n;i++){
        if(maxi<=nums[i]){
            maxi=nums[i];
        }
        }
        for(int i =0;i<n;i++){
        moves=abs(maxi-nums[i])+moves;
        }
        return moves;
    }
};
