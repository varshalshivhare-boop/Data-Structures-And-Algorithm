class Solution {
public:
    bool isThree(int n) {
        vector<int>Div;
      
        for(int i=1;i<=n;i++){
            if(n%i==0){
                Div.push_back(i);
            }
         
        }
        return (Div.size()==3);

        
         
    }
};