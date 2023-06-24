class Solution {
public:
    // Brute force idea: iterate through every pair in the array
    // and pick the index pair that adds up to target.
    // Time complexity: O(n^2) since there are n*n possible pairs
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            for(int o=0; o<nums.size(); o++){
                if(i==o) continue; // Skip if pair with same element, since program statement says not to count it
                if(nums[i]+nums[o]==target) return {i, o};
            }
        }
        return new vector<int>();
    }
};
