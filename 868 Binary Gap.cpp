
class Solution {
public:
    string converttobinary(int n) {
        string res = "";
        while (n > 0) {
            if (n % 2 == 1)
                res += '1';
            else
                res += '0';
            n = n / 2;
        }
        reverse(res.begin(), res.end());
        return res;
    }
    
    int binaryGap(int n) {
        string ans = converttobinary(n);
        int i = 0;
        int j = 1;
        int s = ans.size();
        int dis = 0;
        int maxi = 0;
      
        while (i < s && j < s) {
            if (ans[i] == '1') {  
                if (ans[j] == '1') {
                    dis = j - i; 
                    maxi = max(dis, maxi);
                    i = j;
                    j++;
                } else {
                    j++;
                }
            }
            else{
                i++;
                j++;
            }
        }
        return maxi;
    }
};
