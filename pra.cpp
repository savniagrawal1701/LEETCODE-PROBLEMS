
class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n =plants.size();
        int steps=0;
        int capa=capacity;
        for(int i =0;i<n;i++){
            if(plants[i]<=capa){
                capa=capa-plants[i];
                steps=steps+1;
            }
            else{
                capa=capacity-plants[i];
                steps=2*i+1 +steps;
            }
        }
        return steps;
    }
};