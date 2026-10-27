class Solution {
private:
    int getDayNumber(string date) {
        vector<int> daysInMonths = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int month = stoi(date.substr(0, 2));
        int day = stoi(date.substr(3, 2));
        
        int totalDays = day;
        for (int i = 0; i < month - 1; i++) {
            totalDays += daysInMonths[i];
        }
        return totalDays;
    }

public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int startAlice = getDayNumber(arriveAlice);
        int endAlice = getDayNumber(leaveAlice);
        int startBob = getDayNumber(arriveBob);
        int endBob = getDayNumber(leaveBob);
        
        int overlapStart = max(startAlice, startBob);
        int overlapEnd = min(endAlice, endBob);
        
        if (overlapStart <= overlapEnd) {
            return overlapEnd - overlapStart + 1;
        }
        
        return 0;
    }
};