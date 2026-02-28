class Solution {
public:
int reverseDigits(int num) {

    int n = 0;
    while(num > 0) {
        n *= 10;
        n += num % 10;
        num /= 10;
    }
    return n;
}
    int countDistinctIntegers(vector<int>& nums) {
       set<int> set1 ;
    for(int i=0; i<nums.size(); i++) {
        //if(!set.contains(nums[i])) {
            set1.insert(nums[i]);
            set1.insert(reverseDigits(nums[i]));
        //}
    }

    return set1.size();

    }
};
