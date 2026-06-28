class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        // Step 1: Sort the array
        sort(arr.begin(), arr.end());
        
        // Step 2: First element must be 1
        arr[0] = 1;
        // step 3: check adjacent elements
        for(int i=1;i<arr.size();i++){
               if (arr[i] - arr[i - 1] > 1) {
                arr[i] = arr[i - 1] + 1; // Decrease to max allowed value
            }
            
        }
        return arr.back();
    }
};