class Solution {
public:
    
    int countSetBits(int n) {
        if (n == 0) return 0;

        int oneCount = 0;
        while (n > 0) {
            if ((n & 1) == 1) {
                oneCount++;
            }
            n >>= 1; // Shift right by 1 bit
        }
        return oneCount;
    }

    vector<int> sortByBits(vector<int>& arr) {
        // Sort the array 
        sort(arr.begin(), arr.end(), [this](int a, int b) {
            int bitsA = countSetBits(a);
            int bitsB = countSetBits(b);
            
            // If they have the same number of 1 bits, sort by value ascending
            if (bitsA == bitsB) {
                return a < b;
            }
            // Otherwise, sort by the number of 1 bits ascending
            return bitsA < bitsB;
        });

        return arr;
    }
};