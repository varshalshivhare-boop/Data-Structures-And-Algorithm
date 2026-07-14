int countDistinct(vector<int>& arr) {
    unordered_map<int,int>mp;
    for(int x:arr){
        mp[x]++;
    }
    
    return mp.size();
}