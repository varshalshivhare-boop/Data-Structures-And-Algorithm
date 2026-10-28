
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n, -1);

        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n; j++) {
                int g = (i + j) % n;

                if (nums[g] > nums[i]) {
                    v[i] = nums[g];
                    break;
                }
            }
        }

        return v;
    }
};
