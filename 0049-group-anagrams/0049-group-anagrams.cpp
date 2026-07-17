class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Step 1: Map banayein jahan key = sorted string aur value = original strings ka list
        unordered_map<string, vector<string>> anagramMap;
        
        // Step 2: Har string par loop chalayein
        for (string s : strs) {
            string sorted_s = s; 
            sort(sorted_s.begin(), sorted_s.end()); // String ko sort karke key banayi
            
            anagramMap[sorted_s].push_back(s); // Original string ko sahi bucket mein daala
        }
        
        // Step 3: Map se saare groups nikaal kar result vector mein daalein
        vector<vector<string>> result;
        for (auto& pair : anagramMap) {
            result.push_back(pair.second);
        }
        
        return result;
    }
};