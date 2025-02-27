class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};  // Edge case: empty input

        // Step 1: Sort the intervals based on the start times
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;
        merged.push_back(intervals[0]);  // Initialize with the first interval

        // Step 2: Merge intervals
        for (int i = 1; i < intervals.size(); i++) {
            vector<int>& last = merged.back();  // Last interval in merged result

            if (intervals[i][0] <= last[1]) {  // Overlapping case
                last[1] = max(last[1], intervals[i][1]);  // Merge intervals
            } else {
                merged.push_back(intervals[i]);  // No overlap, add new interval
            }
        }
        return merged;
    }
};
