class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start,
                                int destination) {
        int n = distance.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + distance[i];
        }
        int sum1 = 0;
        for (int i = min(start,destination); i < max(destination,start); i++) {
            sum1 = sum1 + distance[i];
        }
        if (sum - sum1 >= sum1)
            return sum1;
        return sum - sum1;
    }
};