class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                s.erase(i, 1);
                //i uss index ka erase huya and aage gaya and because of loop woh or aage chala aagya toh hame usko check karne ke liye wapas i-- karna padega..jis se woh char na choote 
                i--;
                continue;
            }
            if(isalnum(s[i])==false){
                  s.erase(i, 1);
                    i--;
                continue;
            }
            s[i] = tolower(s[i]);
        }
        int i=0;
        int j =s.size()-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }else {
                return false;
            }
        }
        return true;
    }
};
