class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        int n =asteroids.size();
        sort(asteroids.begin(),asteroids.end());
        long long pmass=mass;
        for(int i =0;i<n;i++){
            if(pmass>=asteroids[i]){
                pmass=pmass+asteroids[i];
            }
            else {
                return false;
            }
        }
        return true;
    }
};