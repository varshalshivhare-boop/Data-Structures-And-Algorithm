class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> divisors;
        
        // Find all factors up to sqrt(n)
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                divisors.push_back(i);
                if (i != n / i) {
                    divisors.push_back(n / i);
                }
            }
        }
        
        // Sort the factors in ascending order
        sort(divisors.begin(), divisors.end());
        
        
        if (k <= divisors.size()) {
            return divisors[k - 1];
        }
        
        return -1;
    }
};