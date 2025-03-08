class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;  // Handle empty case
        
        sort(nums.begin(), nums.end());
        int count = 1;
        int maxcount = 1; // Set to 1 since we count at least one element
        
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] == nums[i + 1]) continue;  // Skip duplicate numbers
            if(nums[i] + 1 == nums[i + 1]) {
                count++;
            } else {
                maxcount = max(maxcount, count);
                count = 1;
            }
        }
        return max(maxcount, count); // Ensure max is returned at the end
    }
};
