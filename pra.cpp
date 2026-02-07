//2124. Check if All A's Appears Before All B's
class Solution {
public:
    bool checkString(string s) {
        int n =s.size();
        for(int i =0;i<=n-2;i++){
           if(s[i]=='b'&& s[i+1]=='a'){
            return false;
           }
        }
        return true;
    }
};