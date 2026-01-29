//Water Bottles
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drank = numBottles;
        int empty = numBottles;
        while (empty >= numExchange) {
            empty = empty - numExchange;
            drank = drank + 1;
            empty = empty + 1;
        }
        return drank;
    }
};