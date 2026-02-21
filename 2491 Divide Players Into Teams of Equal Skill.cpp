class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int i=0;
        int j=skill.size()-1;
        long long total=0;
        while(i<j){
            if(skill[i]+skill[j]==skill[i+1]+skill[j-1]){
              total=skill[i]*skill[j]+total;
              i++;
              j--;
            } else{
                return -1;
            }
        }
        return total;
    }
};
