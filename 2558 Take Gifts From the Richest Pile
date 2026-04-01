class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
        for (int i = 0; i < gifts.size(); i++) {
            pq.push(gifts[i]);
        }
        for (int i = 1; i <= k; i++) {
            int a = pq.top();
            pq.pop();
            a = floor(sqrt(a));
            pq.push(a);
        }
        long long sum = 0;
        for (int i = 0; i < gifts.size(); i++) {
            int a = pq.top();
            sum = sum + a;
            pq.pop();
        }
        return sum;
    }
};
