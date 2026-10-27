class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> daysInMonths = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        // Alice ke dates ko parse karna
        int aliceArrivalMonth = stoi(arriveAlice.substr(0, 2));
        int aliceArrivalDate = stoi(arriveAlice.substr(3, 2));
        int aliceLeaveMonth = stoi(leaveAlice.substr(0, 2));
        int aliceLeaveDate = stoi(leaveAlice.substr(3, 2));
        
        // Bob ke dates ko parse karna
        int bobArrivalMonth = stoi(arriveBob.substr(0, 2));
        int bobArrivalDate = stoi(arriveBob.substr(3, 2));
        int bobLeaveMonth = stoi(leaveBob.substr(0, 2)); 
        int bobLeaveDate = stoi(leaveBob.substr(3, 2));
        
        // Unko total day of the year mein convert karna for easy comparison
        int startAlice = aliceArrivalDate;
        for (int i = 0; i < aliceArrivalMonth - 1; i++) startAlice += daysInMonths[i];
        
        int endAlice = aliceLeaveDate;
        for (int i = 0; i < aliceLeaveMonth - 1; i++) endAlice += daysInMonths[i];
        
        int startBob = bobArrivalDate;
        for (int i = 0; i < bobArrivalMonth - 1; i++) startBob += daysInMonths[i];
        
        int endBob = bobLeaveDate;
        for (int i = 0; i < bobLeaveMonth - 1; i++) endBob += daysInMonths[i];
        
        // Overlap nikalna (Max arrival aur Min leave)
        int overlapStart = max(startAlice, startBob);
        int overlapEnd = min(endAlice, endBob);
        

        if (overlapStart <= overlapEnd) {
            return overlapEnd - overlapStart + 1;
        }
        
        return 0;
    }
};