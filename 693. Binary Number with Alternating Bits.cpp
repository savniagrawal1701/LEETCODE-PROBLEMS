class Solution {
public:
string converttobinary(int n)
{
    string res = "";
    while (n > 0)
    {
        if (n % 2 == 1)
            res +='1';
        else
            res +='0';
        n = n / 2;
    }
    reverse(res.begin(), res.end());
    return res;
}
    bool hasAlternatingBits(int n) {
        string s=converttobinary(n);
        for(int i =0;i<s.size()-1;i++){
         if (s[i] == s[i+1]) {
            return false;
        }
        }
        return true;
    }
};
