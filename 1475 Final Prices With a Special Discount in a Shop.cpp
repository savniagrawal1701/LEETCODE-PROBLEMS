class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        // Traverse each item to find its potential discount
        for (int i = 0; i < n; i++) {
            // Look for the first item j > i such that prices[j] <= prices[i]
            for (int j = i + 1; j < n; j++) {
                if (prices[j] <= prices[i]) {
                    // Apply the discount and stop looking for this item
                    prices[i] -= prices[j];
                    break;
                }
            }
        }
        return prices;
    }
};
