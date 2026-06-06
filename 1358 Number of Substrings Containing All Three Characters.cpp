// Valid Window Found: Jab right pointer aage badhta hai aur hamari window me 'a', 'b', aur 'c' teeno ki frequency kam se kam 1 ho jaati hai, tab current window s[left...right] ek valid substring banati hai.Counting Future Substrings: Agar s[left...right] valid hai, toh uske aage right ke baad jitne bhi characters bache hain (s.length() - right), unko add karne se jo bhi badi substrings banengi, wo sabhi valid hongi.Shrinking the Window: Uske baad hum left pointer ko aage badha kar window ko chhota karte hain (left++) taaki hum agli possible valid window dhoodh sakein.



class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> freq(3, 0);

        int res = 0;

        int left = 0;

        for (int right = 0; right < s.length(); right++) {

            freq[s[right] - 'a']++;

            while (freq[0] > 0 && freq[1] > 0 && freq[2] > 0) {

                res += (s.length() - right);

                freq[s[left] - 'a']--;
                left++;
            }
        }

        return res;
    }
};
