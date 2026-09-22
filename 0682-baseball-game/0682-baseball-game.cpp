class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(auto &x:operations){
            if(x=="+"){
                int temp1=st.top();
                st.pop();
                int temp2=st.top();
                int sum=temp1+temp2;
                st.push(temp1);
                st.push(sum);
            }
                else if(x=="D"){
                  int topVal=st.top();
                st.push(2*topVal);
           } 
              else  if(x=="C"){
                st.pop();
              }
              else{
                st.push(stoi(x));
              }
        }

int totalSum=0;
while(!st.empty()){
    totalSum+=st.top();
    st.pop();
}
return totalSum;

        }
    
};