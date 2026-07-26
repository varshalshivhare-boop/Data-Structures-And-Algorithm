class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // If the complement already exists in the map, we found our pair
            if (numMap.count(complement)) {
                return {numMap[complement], i};
            }
            
            // Otherwise, store current element and its index
            numMap[nums[i]] = i;
        }
        
        return {};
    }
};