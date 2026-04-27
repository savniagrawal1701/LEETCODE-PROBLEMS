//doing the easiest question as i am having papers and i am not revising dsa 
class Solution {
public:
    int findClosest(int x, int y, int z) {
        if(abs(z-y)>abs(z-x)){
            return 1;
        }else if(abs(z-y)<abs(z-x)){
            return 2;
        }else return 0;
    }
};
