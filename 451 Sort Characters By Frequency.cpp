
class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int, char>> hashmap(256);
        
        for(int i = 0; i < 256; i++) {
            hashmap[i] = {0, (char)i};
        }
        
        for(int i = 0; i < s.size(); i++){
            hashmap[s[i]].first++; 
        }
        
        sort(hashmap.rbegin(), hashmap.rend());
        
        string ans = "";
        for(int i = 0; i < 256; i++){
            if (hashmap[i].first == 0) {
                break;
            }
            ans.append(hashmap[i].first, hashmap[i].second);
        }
        
        return ans;
    }
};
