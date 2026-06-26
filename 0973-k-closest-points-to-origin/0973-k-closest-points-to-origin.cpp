class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // Max Heap: {distance, {x, y}}
        // Hum pair ke andar ek aur pair store kar rahe hain
        priority_queue<pair<int, vector<int>>> maxHeap;
        
        for (const auto& p : points) {
            int x = p[0];
            int y = p[1];
            int distSq = x * x + y * y;
            
            // Point ko heap mein push karo
            maxHeap.push({distSq, p});
            
            // Agar size k se zyada hai, toh top (max distance) ko hata do
            if (maxHeap.size() > k) {
                maxHeap.pop();
            }
        }
        
        // Heap mein bache hue elements ko result mein daalo
        vector<vector<int>> result;
        while (!maxHeap.empty()) {
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        
        return result;
    }
};