class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num); // Number ko string banaya taaki window chala sakein
        int count = 0;
        int n = s.length();

        // Loop chalega jahan tak k-size ki window ban sake
        for (int i = 0; i <= n - k; i++) {
            // i se shuru karke k length ki substring uthao
        string window_str = s.substr(i, k);
            
            // String ko wapas integer mein badlo (yeh leading zeros khud handle kar leta hai, "04" -> 4)
            int window_num = stoi(window_str);

            // Aapki lagayi hui dono conditions:
            // 1. window_num 0 nahi hona chahiye
            // 2. num poori tarah divide hona chahiye
            if (window_num != 0 && num % window_num == 0) {
                count++;
            }
        }

        return count;
    }
};