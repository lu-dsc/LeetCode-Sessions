class Solution {
public:
    // Hash map/complement idea: instead of trying every
    // possible pair, we can save the index of the current
    // number in some sort of data structure (a hash map in
    // this case), and for every number in the vector, check
    // if we have traversed through the number that adds up
    // to the target (complement).
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // create hash map
        for(int i=0; i<nums.size(); i++){
            int comp = target-nums[i];
            if(mp.count(comp)) return {i, mp[comp]}; // if complement is in map, we return index pair
            mp[nums[i]] = i; // save current index in the map
        }
        return vector<int>();
    }
};
