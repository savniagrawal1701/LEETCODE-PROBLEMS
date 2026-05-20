#include <vector>

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> ans;
        vector<int> count(n + 1, 0);
        int prefix_common = 0;

        for (int i = 0; i < n; ++i) {
            // Update frequency for element in A
            count[A[i]]++;
            if (count[A[i]] == 2) {
                prefix_common++;
            }

            // Update frequency for element in B
            count[B[i]]++;
            if (count[B[i]] == 2) {
                prefix_common++;
            }

            ans.push_back(prefix_common);
        }

        return ans;
    }
};
