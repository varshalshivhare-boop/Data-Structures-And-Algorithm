class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        int len = s.length();
        int i = len - 2;
        
        // 1. Peeche se pehla element dhundo jo chhota ho
        while (i >= 0 && s[i] >= s[i + 1]) {
            i--;
        }
        
        // Agar aisi koi condition nahi mili (matlab descending order mein hai)
        if (i < 0) return -1;
        
        // 2. Usse bada digit aage se dhundo aur swap karo
        int j = len - 1;
        while (j >= 0 && s[j] <= s[i]) {
            j--;
        }
        swap(s[i], s[j]);
        
        // 3. Baaki bache hue part ko reverse kar do
        reverse(s.begin() + i + 1, s.end());
        
        // 4. Long long mein convert karke 32-bit limit check karo
        long long ans = stoll(s);
        if (ans > INT_MAX) return -1;
        
        return ans;
    }
};