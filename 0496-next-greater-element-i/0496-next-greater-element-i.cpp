class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> ngeMap; // Har element aur uske next greater ka pair banane ke liye
        stack<int> st;                 // Monotonic stack
        
        // Step 1: nums2 par loop chala kar stack ki madad se pairs bana lo
        for (int num : nums2) {
            while (!st.empty() && st.top() < num) {
                ngeMap[st.top()] = num; // Stored pair: (element -> next greater)
                st.pop();
            }
            st.push(num);
        }
        
        // Jo elements stack me bach gaye, unka koi next greater nahi hai 
        // toh unke liye default -1 set ho jayega (ya hum condition me handle karenge)
        
        // Step 2: nums1 ke har element ko map me check karo
        vector<int> result;
        for (int num : nums1) {
            // Agar map me wo element hai aur uska next greater stored hai
            if (ngeMap.find(num) != ngeMap.end()) {
                result.push_back(ngeMap[num]);
            } else {
                // Agar map me nahi mila, iska matlab uska koi next greater nahi tha
                result.push_back(-1);
            }
        }
        
        return result;
    }
};