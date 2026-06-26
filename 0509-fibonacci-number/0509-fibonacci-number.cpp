class Solution {
public:
    int fib(int n) {

        unordered_map<int, int>dp;
        if(n==0) return n;
        if(n==1) return n;
        if(dp.find(n)!=dp.end() ) return dp[n];

        
         return fib(n-1)+fib(n-2); 
           }
};