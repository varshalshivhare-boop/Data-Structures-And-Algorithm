class Solution {
public:
    bool isThree(int n) {
        vector<int>Div;
        int count=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                Div.push_back(i);
            }
           count++;
        }
        return (Div.size()==3);

        
         
    }
};