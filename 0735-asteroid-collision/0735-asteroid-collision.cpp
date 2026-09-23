#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        vector<int> st;

        for (int x : asteroids) {

            // Agar stack empty hai
            // ya same direction hai
            if (st.empty() || st.back() * x > 0) {
                st.push_back(x);
                continue;
            }

            // Opposite direction:
            // stack ka positive + current negative
            while (!st.empty() && st.back() > 0 && x < 0) {

                // Stack wala chhota hai
                if (st.back() < abs(x)) {
                    st.pop_back();
                }

                // Dono same size hain
                else if (st.back() == abs(x)) {
                    st.pop_back();
                    x = 0;          // current bhi destroy
                    break;
                }

                // Stack wala bada hai
                else {
                    x = 0;          // current destroy
                    break;
                }
            }

            // Agar current asteroid survive kar gaya
            if (x != 0) {
                st.push_back(x);
            }
        }

        return st;
    }
};
