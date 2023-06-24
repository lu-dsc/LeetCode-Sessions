class Solution {
public:
    // Idea: iterate through the whole array while
    // maintaining a global sum, and a current sum.
    // While iterating through the array, keep the
    // largest between the current sum and the global sum.
    // If curSum becomes negative, reset it since it's
    // better to just take the next element.
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN; // maxSum starts as -infinity
        int curSum = 0;
        for(int i=0; i<nums.size(); i++){
            curSum+=nums[i]; // add current number
            maxSum = max(maxSum, curSum); // check if sum is larger than global sum
            if(curSum<0) curSum=0; // reset if negative
        }
        return maxSum;
    }
};
