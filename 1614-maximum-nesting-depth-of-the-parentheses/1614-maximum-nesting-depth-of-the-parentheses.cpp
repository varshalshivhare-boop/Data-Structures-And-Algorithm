class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int maxdepth = 0;
        
        for (char c : s) {
            if (c == '(') {
                count++;
                maxdepth = max(maxdepth,count);
            } else if (c == ')') {
                count--;
            }
        }
        return maxdepth;
    }
};