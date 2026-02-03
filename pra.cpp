//Minimum Cost of Buying Candies With Discount

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        int n = cost.size();
        int sum = 0;
        if (n % 2 == 0) {
            for (int i = n - 1; i >= 1; i = i - 3) {
                sum = sum + cost[i] + cost[i - 1];
            }
           if (n % 3 == 1) sum += cost[0];
            return sum;
        } else {
            for (int i = n - 1; i >= 1; i = i - 3) {
                sum = sum + cost[i] + cost[i - 1];
            }
            if (n % 3 == 1)
                sum += cost[0];
            return sum;
        }
    }
};