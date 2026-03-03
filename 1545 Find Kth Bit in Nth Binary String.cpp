class Solution {
public:
string makestring(int n) {
        if (n == 1) {
            return "0";
        } else {
            string prev = makestring(n - 1);
            string s = prev;
         
            reverse(s.begin(), s.end());
           
            for (int i = 0; i < s.length(); ++i) {
                s[i] = (s[i] == '0') ? '1' : '0';
            }
           
            return prev + "1" + s;
        }
    }
    char findKthBit(int n, int k) {
        string a=makestring(n);
        return a[k-1];
    }

};
