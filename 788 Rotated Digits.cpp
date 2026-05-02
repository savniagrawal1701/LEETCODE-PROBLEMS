class Solution {
public:
    bool isvalid(int n) {
        string s1 = to_string(n);
        string s = s1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '3' || s[i] == '7' || s[i] == '4') {
                return false;
            } else if (s[i] == '1' || s[i] == '0' || s[i] == '8') {
                s[i] = s[i];

            } else if (s[i] == '2') {
                s[i] = '5';
            } else if (s[i] == '5') {
                s[i] = '2';
            } else if (s[i] == '6') {
                s[i] = '9';
            } else if (s[i] == '9') {
                s[i] = '6';
            }
        }
        if (s1 == s)
            return false;
        else
            return true;
    }

    int rotatedDigits(int n) {
        int count = 0;
        for (int i = 0; i <= n; i++) {
            if (isvalid(i) == true)
                count++;
            else
                continue;
        }
        return count;
    }
};
