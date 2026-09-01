class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        vector<int> duplicates; // Khali vector duplicates ke liye
        vector<int> temp;       // Unique elements temporary store karne ke liye

        temp.push_back(nums[0]);

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                duplicates.push_back(nums[i]); // Duplicate ko alag vector me dala
            } else {
                temp.push_back(nums[i]);       // Unique ko temp me dala
            }
        }

        nums = temp; // Original nums vector ko unique elements se update kar diya
        
        return nums.size();
    }
};