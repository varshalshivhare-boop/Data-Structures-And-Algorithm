class Solution {
private:
   
    int countSetBits(int n) {
        int count = 0;
        while (n > 0) {
            // Check karte hain ki last bit 1 hai ya nahi
            if (n & 1) {
                count++;
            }
            // Number ko right shift karte hain aage ke bits check karne ke liye
            n >>= 1;
        }
        return count;
    }

public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1);
        
        for (int i = 0; i <= n; i++) {
            ans[i] = countSetBits(i);
        }
        
        return ans;
    }
};