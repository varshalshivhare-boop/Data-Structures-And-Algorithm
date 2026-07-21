class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
       unordered_map<string, vector<string>> anagramMap;
       
       // har string ko sort krdo
       for(string s:arr){
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