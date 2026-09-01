class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX; // Ab tak ka sabse min element
        int maxProfit = 0;      // Sabse bada profit

        for (int price : prices) {
            // Step 1: Minimum element update karo
            if (price < minPrice) {
                minPrice = price;
            } 
            // Step 2 & 3: Difference (minus) karke max profit update karo
            else if (price - minPrice > maxProfit) {
                maxProfit = price - minPrice;
            }
        }

        return maxProfit;
    }
};