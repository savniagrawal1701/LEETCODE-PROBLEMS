class Solution {
public:
    int lengthOfLastWord(string s) {
        int n =s.size();
        int count=0;
        if(n==1 && s[0]!=' ') return 1;
        
        for(int i =n-1;i>=1;i--){
            if(s[i]==' ') continue;
            else if(s[i]!=' ' && s[i-1]==' ') break;
            else count++;
        }
        return count+1;
    }
};
