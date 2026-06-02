class Solution {
public:
    int characterReplacement(string s, int k) {

        unordered_map<char, int> freq;

        int left = 0;

        int max_freq = 0;

        int max_len = 0;

        for (int right = 0; right < s.length(); right++) {

            freq[s[right]]++;

            max_freq = max(max_freq, freq[s[right]]);

            while ((right - left + 1) - max_freq > k) {

                freq[s[left]]--;

                left++;
            }

            max_len = max(max_len, right - left + 1);
        }

        return max_len;
    }
};

// IF WALE CODE KA LOGIC
// right aaya aage but ye wali windown invalid hai so hame pata hai ki last
// valid window ya maxlen wali sahi window ka size iss se toh zayda he hai so
// ham left aage kardengaye toh jo bhi maxlen cal hogi woh wahi rahegi as hamne
// winodw invalid hote he shrink kardi and next baar invalid hoke bhi dono aage
// aayengaye and jaise he valid wndown banegi new calculatons or aasa nhi hoga
// ki if mea maxlen cal hojayegi as hamne left bhi badha diya jaise he invalid
// hui

// //, the moment a window becomes invalid, we don't need to waste time
// shrinking it multiple times until it's perfectly valid again. We just shift
// the entire window forward (both left and right move up by 1).

// By doing this, the window size stays locked at our current record size
// (max_len). It will only ever expand and trigger a new maximum calculation if
// it encounters a new, valid chunk of characters that can naturally push right
// further without breaking the if condition.
