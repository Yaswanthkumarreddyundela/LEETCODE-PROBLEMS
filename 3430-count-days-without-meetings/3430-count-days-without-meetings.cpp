class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        if (meetings.empty()) return days;

        // Sort meetings based on start time
        sort(meetings.begin(), meetings.end());

        int occupied_days = 0;
        int start = meetings[0][0], end = meetings[0][1];

        for (int i = 1; i < meetings.size(); i++) {
            if (meetings[i][0] <= end) {
                // Overlapping meeting -> merge
                end = max(end, meetings[i][1]);
            } else {
                // No overlap -> add previous occupied days and start a new range
                occupied_days += (end - start + 1);
                start = meetings[i][0];
                end = meetings[i][1];
            }
        }

        // Add last merged range
        occupied_days += (end - start + 1);

        return days - occupied_days;
    }
};
