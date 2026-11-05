class Solution {

private:
   
        bool DistanceValue(int val, vector<int>& arr2,int d){
            for(int j=0;j<arr2.size();j++){
            if(abs(val-arr2[j])<=d) {
                return true;
            }
          
        }
        return false;
        }

public:
 int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
int count=0;
        for(int i=0;i<arr1.size();i++){
            if(!DistanceValue(arr1[i],arr2,d)){
                count++;
            }
        }
        return count;







    }
};