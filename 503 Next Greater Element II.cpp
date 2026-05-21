class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n =nums.size();
        vector<int> list(n,0);
        stack <int> st;
        for(int i =2*n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i%n]){
                st.pop();
            }
            if(i<n){
                if(st.empty()){
                    list[i]=-1;
                }else {
                    list[i]=st.top();
                }
            }
            st.push(nums[i%n]);
        }
        return list;
    }
};
