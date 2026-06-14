class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
     
        int ans=0;
        for(int i =0;i<tickets.size();i++){
          if(i<=k && tickets[i]>=tickets[k] ){
            ans=ans+tickets[k];
          }
          else if(i<=k && tickets[i]<tickets[k]) {
ans=ans+tickets[i];
          }
          else if(i>k && tickets[i]>=tickets[k]){
            ans=ans+tickets[k]-1;
          }
          else if(i>k && tickets[i]<tickets[k]){
            ans=ans+tickets[i];
          }
        }
     return ans;
    }
};
