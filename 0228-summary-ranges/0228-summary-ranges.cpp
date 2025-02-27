class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> range;
        int n = nums.size();
        if (n == 0) return range; // Handle empty input case

        int start = nums[0]; // Start of the current range

        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i - 1] + 1) { // If not consecutive
                if (start == nums[i - 1]) { // Single element
                    range.push_back(to_string(start));
                } else { // Range of numbers
                    range.push_back(to_string(start) + "->" + to_string(nums[i - 1]));
                }
                start = nums[i]; // Start a new range
            }
        }

        // Handle the last range or single element
        if (start == nums[n - 1]) {
            range.push_back(to_string(start));
        } else {
            range.push_back(to_string(start) + "->" + to_string(nums[n - 1]));
        }

        return range;
    }
};