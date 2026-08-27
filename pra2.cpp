class Solution {
public:
int binaryS(vector<int>& row){
    int low=0;
    int high=row.size()-1;
    int ans=-1;
    while(low<=high){
        int mid = low + (high - low) / 2;
        if(row[mid]>=0){
            low=mid+1;
        }
        else {
         ans =mid;
            high=mid-1;
        }
    }
   if(ans==-1){
    return 0;
   } return row.size()-ans;
}
    int countNegatives(vector<vector<int>>& grid) {
        int r=grid.size();
        int sum=0;
        for(int i =0;i<r;i++){
sum=sum+binaryS(grid[i]);
        }
        return sum;
    }
};