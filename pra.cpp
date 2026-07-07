class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        string x_str = "";
        long long  sum = 0;
        
        for (char c : s) {
            if (c != '0') {
                x_str += c;
                sum += (c - '0');
            }
        }
        
        if (x_str.empty()) {
            return 0;
        }
        
        long long  x = stoi(x_str);
        long long ans= x * sum;;
        return ans;
    }
};