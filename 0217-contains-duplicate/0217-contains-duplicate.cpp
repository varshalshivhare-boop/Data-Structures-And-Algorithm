class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        
        for (int x : nums) {
            mp[x]++;
            // Check if the current element's count has exceeded 1
            if (mp[x] > 1) {
                return true;
            }
        }
        
        return false;
    }
};