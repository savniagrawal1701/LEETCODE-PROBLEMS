class Solution {
public:
    bool judgeCircle(string moves) {
        int hori = 0;
        int verti = 0;
        for (int i = 0; i < moves.size(); i++) {
            if (moves[i] =='U') {
                verti++;
            } else if (moves[i] == 'D') {
                verti--;
            } else if (moves[i] == 'L') {
                hori++;
            } else if (moves[i] == 'R') {
                hori--;
            }
        }
        if (verti != 0 || hori!=0){
            return false;
        }
    return true;
    }
};
