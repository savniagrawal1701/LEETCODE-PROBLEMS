class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
       vector<int> copy = arr;
    sort(copy.begin(), copy.end());
    
    int rank = 1;
    unordered_map<int, int> mpp;
    
    for (int i = 0; i < copy.size(); i++) {
        int num = copy[i];
        if (mpp.find(num) == mpp.end()) {
            mpp[num] = rank;
            rank++;
        }
    }
    
    for (int i = 0; i < arr.size(); i++) {
        arr[i] = mpp[arr[i]];
    }
    
    return arr;
    }
};