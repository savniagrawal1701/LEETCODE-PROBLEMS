class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest = nums[0];
        int index=0;
        int secondl = -1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > largest) {
index=i;
                secondl = largest;
                largest = nums[i];
            } else if (nums[i] < largest &&
                       nums[i] >
                           secondl) // when current element is less than largest
                                    // and greater than second largest
            // when u find that first element is largest and rest all are
            // smaller then first element
            {
                secondl = nums[i];
            }
        }
        if(secondl*2<=largest){
            return index;
        }else return -1;
    }
};
