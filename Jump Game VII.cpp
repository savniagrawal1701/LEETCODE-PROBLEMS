class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        int n = s.size();
    
    if(s[n-1] == '1') return false;
    
    vector<int> dp(n, 0);
    dp[n-1] = 1;

    for(int ind = n-2; ind >= 0; ind--) {
        if(s[ind] == '1') continue;

        for(int j = ind + minJump; j <= min(ind + maxJump, n-1); j++) {
            if(dp[j] == 1) {
                dp[ind] = 1;
                break;
            }
        }
    }

    return dp[0] == 1;
    }
};
