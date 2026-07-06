class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
     int n = intervals.size();
    vector<int> coveredCount(n, 0);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) continue;

            if (intervals[j][0] <= intervals[i][0] && intervals[i][1] <= intervals[j][1]) {
                coveredCount[i]++;
            }
        }
    }

    int remainingIntervals = 0;
    for (int count : coveredCount) {
        if (count == 0) {
            remainingIntervals++;
        }
    }

    return remainingIntervals;

    
    }
};
