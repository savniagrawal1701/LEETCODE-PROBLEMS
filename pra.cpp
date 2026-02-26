class Solution
{
public:
    int maxCoins(vector<int> &piles)
    {
        sort(piles.begin(), piles.end());
        int n = piles.size();
        int j = n - 2;
        int count = 0;
        if (n == 3)
            return piles[1];
        while (j >= n / 3)
        {
            count = count + piles[j];
            j = j - 2;
        }
        return count;
    }
};