class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        int i=0;
        int j=1;
        int count=0;
        while(j<=nums.size()-1){
if(nums[i]<=nums[j]){
    count++;
    i=j;
    j++;
}
else{
    j++;
}
        }
        return count+1;
    }
};

//apporach 2
class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        stack<int>st;
        for(int i =0;i<nums.size();i++){
            if(st.empty() || st.top()<=nums[i]) st.push(nums[i]);
            else continue;
        }
        return st.size();
    }
};
