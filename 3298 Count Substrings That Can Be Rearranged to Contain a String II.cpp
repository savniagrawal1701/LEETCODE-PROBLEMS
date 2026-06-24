class Solution {
public:
    long long validSubstringCount(string word1, string word2) {
        int n = word1.length();
        
        
        vector<int> target(26, 0);
        for (char c : word2) target[c - 'a']++;
        
        
        vector<int> window(26, 0);
        long long ans = 0;
        int l = 0;
        
        
        for (int r = 0; r < n; r++) {
            
            window[word1[r] - 'a']++; 
            
            
            while (isValid(window, target)) {
                
                ans += (n - r); 
                
                
                window[word1[l] - 'a']--;
                l++;
            }
        }
        
        return ans;
    }

private:
    
    bool isValid(const vector<int>& window, const vector<int>& target) {
        for (int i = 0; i < 26; i++) {
            if (window[i] < target[i]) {
                return false; 
            }
        }
        return true; 
    }
};
