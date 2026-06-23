class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    // freq map ban gya
    unordered_map<int, int> freqMap;
    for(int x:nums){
        freqMap[x]++;
    }
    // Pair: {frequency, number}
   // max heap banana
        priority_queue<pair<int, int>> maxHeap;
        for(auto x:freqMap){
            maxHeap.push({x.second, x.first}); // O(n log n
        }
     vector<int> result;
  for(int i=0;i<k;i++){
    result.push_back(maxHeap.top().second);
    maxHeap.pop();
  }
   return result;

    }
};