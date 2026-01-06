class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> real=heights;
        sort(real.begin(),real.end());
        int count=0;
        for(int i =0;i<heights.size();i++){
            if(heights[i] != real[i]) count++;
        }
        return count;
    }
};