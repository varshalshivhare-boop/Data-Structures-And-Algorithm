class Solution {
  public:
    int maxArea(vector<int> &height) {
        // code heere
        int n=height.size();
        int slow=0;
        int fast=n-1;
        int result=0;
      while(slow<fast){

              int  length=fast-slow-1;
              int h=min(height[slow],height[fast]);
              int ans= ( length*h);
              result=max(result,ans);
              if(height[slow]<height[fast]) slow++ ;
              else fast--;
          }
          return result;

    }
};