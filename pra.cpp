class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
       int i =0;
    //    int maxi=-1;             //logic at last
    //    int mini=INT_MAX;
       while(i<nums.size()){
          int maxi = nums[0]; 
            int mini = nums[i]; 

       for (int j=0;j<=i;j++){
        maxi=max(maxi, nums[j]);
       }
         for (int j=i;j<nums.size();j++){
        mini=min(mini, nums[j]);
       
       }
       
       if(maxi-mini<=k) return i ;
    i++;
       }
      return -1;
    }
};

//The problem with keeping the initialization at the very start is that mini and maxi never forget the elements from previous rounds, even when they shouldn't.
//When you move i forward, you are changing the specific windows of the array you want to check:
//The maxi window grows (0 to i) \(\rightarrow \) This part actually works fine if you keep it outside.
//The mini window shrinks (i to the end) \(\rightarrow \) This is where the logic breaks.
//The Shrinking Window ProblemAs i increases, elements are dropped from the beginning of the mini loop. If a dropped element happened to be the smallest number in the entire array, mini will permanently stick to that old, dropped value. It can never increase because the min() function only lets it stay the same or get smaller.