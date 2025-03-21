class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // O(n log n)
        for (int i = 1; i < nums.size(); ++i) { // O(n)
            if (nums[i] == nums[i - 1])
                return true;
        }
        return false;
    }
};
