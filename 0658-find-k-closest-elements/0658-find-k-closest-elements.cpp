class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int left = 0;
        int right = arr.size() - 1;
        
        // Sahi Condition: Jab tak window size k se bada hai
        while (right - left + 1 > k) {
            // Compare karo kaunsa point door hai
            if (abs(arr[left] - x) <= abs(arr[right] - x)) {
                right--; // Right wala zyada door hai
            } else {
                left++;  // Left wala zyada door hai
            }
        }
        
        vector<int> result;
        for (int i = left; i <= right; i++) {
            result.push_back(arr[i]);
        }
        return result;
    }
};