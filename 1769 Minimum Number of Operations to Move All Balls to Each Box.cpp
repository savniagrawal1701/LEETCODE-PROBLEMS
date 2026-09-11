class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans(boxes.size(), 0);
        
        for (int i = 0; i < boxes.size(); i++) {
            int sum = 0;
            for (int j = 0; j < boxes.size(); j++) {
                
                if (boxes[j] == '1') { 
                    sum += abs(i - j); 
                }
            }
            ans[i] = sum; 
        }
        
        return ans; 
    }
};
