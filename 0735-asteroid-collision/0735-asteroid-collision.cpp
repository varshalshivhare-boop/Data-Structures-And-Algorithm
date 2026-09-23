class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;

        for (int x : asteroids) {
            // Step 1: Chhote positive asteroids ko destroy karte raho
            while (!st.empty() && st.back() > 0 && x < 0 && st.back() < -x) {
                st.pop_back();
            }

            // Step 2: Barabar size ke case me top asteroid destroy hoga
            if (!st.empty() && st.back() > 0 && x < 0 && st.back() == -x) {
                st.pop_back();
            } 
            // Step 3: Agar current asteroid destroy NAHI hua (x safe hai)
            else if (st.empty() || st.back() < 0 || x > 0) {
                st.push_back(x);
            }
            // (Agar st.back() > -x hota, toh current x destroy ho jata aur push nahi hota)
        }

        return st;
    }
};