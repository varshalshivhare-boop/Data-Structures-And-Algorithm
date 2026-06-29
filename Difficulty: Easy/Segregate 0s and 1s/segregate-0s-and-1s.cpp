class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        
    int count0 =0, count1 = 0;

    // 1. Count frequencies
    for(int num : arr) {
        if(num == 0) count0++;
        else count1++;
    }

    // 2. Clear original vector
    arr.clear();

    // 3. Push back 0s then 1s
    while(count0--) arr.push_back(0);
    while(count1--) arr.push_back(1);

    }
};