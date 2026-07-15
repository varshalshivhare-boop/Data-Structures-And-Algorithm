class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int> mp;
        unordered_map<int,int> mp2;
        vector<int> ans;

        // nums1 ki frequency
        for(int x : nums1){
            mp[x]++;
        }

        // nums2 ki frequency
        for(int x : nums2){
            mp2[x]++;
        }

        // Common keys find karo
        for(auto it : mp){
            if(mp2.find(it.first) != mp2.end()){
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};