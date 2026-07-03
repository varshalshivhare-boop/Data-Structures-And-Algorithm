class Solution {
public:
    int totalFruit(std::vector<int>& fruits) {
        std::unordered_map<int, int> basket; // Fruit type -> Unka count
        int left = 0;
        int maxFruits = 0;

        for (int right = 0; right < fruits.size(); right++) {
            // 1. Current fruit ko basket mein add karo
            basket[fruits[right]]++;

            // 2. Agar distinct fruits 2 se zyada ho gaye, toh window ko shrink karo
            while (basket.size() > 2) {
                basket[fruits[left]]--;
                
                // Agar piche waale fruit ka count 0 ho gaya, toh use map se poori tarah hata do
                if (basket[fruits[left]] == 0) {
                    basket.erase(fruits[left]);
                }
                left++; // Left pointer ko aage badhao
            }

            // 3. Current valid window ki length nikal kar max update karo
            maxFruits = std::max(maxFruits, right - left + 1);
        }

        return maxFruits;
    }
};