class Solution {
public:
    int commonFactors(int a, int b) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
         for(int i=1;i<=a;i++){
            if(a%i==0){
                mp1[i]++;
            }
         }
         for(int i=1;i<=b;i++){
            if(b%i==0){
                mp2[i]++;
            }
         }
int count=0;
    for(auto x:mp1){
    if(mp2.count(x.first)){
        count++;
    }
    }
    return count;
    


    }
};