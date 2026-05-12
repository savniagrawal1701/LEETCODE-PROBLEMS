//high difference and minium ka minumum
class Solution {
public:
 static bool compareTasks(const vector<int>& a, const vector<int>& b) {
    int diffA = a[1] - a[0]; // minimum - actual
    int diffB = b[1] - b[0];

    //  Priority goes to the larger difference
    if (diffA != diffB) {
        return diffA > diffB;
    }

    //If differences are the same, smaller minimum comes first
    return a[1] < b[1];
}
    int minimumEffort(vector<vector<int>>& tasks) {
     
        sort(tasks.begin(), tasks.end(), compareTasks);

        int total = 0;
        int currentene = 0;

        for (const auto& task : tasks) {
            int actual = task[0];
            int minimum = task[1];

            if (currentene < minimum) {
                total += (minimum - currentene);
                currentene = minimum;
            }
            currentene -= actual;
        }

        return total;
    }
};
