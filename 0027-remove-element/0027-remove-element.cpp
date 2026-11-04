#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> list;
        
        
        for (int num : nums) {
            if (num != val) {
                list.push_back(num);
            }
        }
        
        
        for (int i = 0; i < list.size(); i++) {
            nums[i] = list[i];
        }
        
        
        return list.size();
    }
};