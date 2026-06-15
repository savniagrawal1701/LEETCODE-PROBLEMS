class Solution {
public:
    int maximumRobots(vector<int>& chargeTimes, vector<int>& runningCosts,
                      long long budget) {
        int l = 0;
        int r = 0;
        int k = 0;
        long long sum = 0;
        int cost = 0;
        int ans = 0;
        multiset<int> m;
        while (r < chargeTimes.size()) {
            m.insert(chargeTimes[r]);
            sum = sum + runningCosts[r];
            while (l <= r && (*m.rbegin() + (r - l + 1) * sum) > budget) {
                sum -= runningCosts[l];
                m.erase(m.find(chargeTimes[l]));
                l++;
            }
               ans = max(ans, r - l + 1);
               r++;
        }
        return ans;
    }
};
