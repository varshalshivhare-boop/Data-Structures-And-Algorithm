class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        unordered_map<int, string> mp;

        int n = strs.size();

        if (n == 0) return "";

        // Saare strings HashMap mein store karo
        for (int i = 0; i < n; i++) {
            mp[i] = strs[i];
        }

        string ans = "";

        // First string ke characters check karo
        for (int j = 0; j < mp[0].size(); j++) {
            char ch = mp[0][j];
            bool same = true;

            // Baaki strings mein same position check karo
            for (int i = 1; i < n; i++) {
                if (j >= mp[i].size() || mp[i][j] != ch) {
                    same = false;
                    break;
                }
            }

            if (same) {
                ans += ch;
            } else {
                break;
            }
        }

        return ans;
    }
};