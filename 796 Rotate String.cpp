class Solution {
public:
    bool rotateString(string s, string goal) {
        // Must be the same length to be a rotation
        if (s.length() != goal.length()) return false;
        
        // s + s contains all possible rotations
        return (s + s).contains(goal); 
    }
};
