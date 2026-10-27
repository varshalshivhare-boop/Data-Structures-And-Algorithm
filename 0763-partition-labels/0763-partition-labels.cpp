class Solution {
public:
    vector<int> partitionLabels(string s) {
        int start=0;
        int end=0;
        vector<int>ans;
        vector<int>occ(26,0);
        for(int i=0;i<s.length();i++){
            occ[s[i]-'a']=i;

        }

        for(int i=0;i<s.length();i++){
            end=max(end,occ[s[i]-'a']);
            if(i==end){
                ans.push_back(end-start+1);
                start=i+1;
            }
        }
        return ans;
        
        
            }
};