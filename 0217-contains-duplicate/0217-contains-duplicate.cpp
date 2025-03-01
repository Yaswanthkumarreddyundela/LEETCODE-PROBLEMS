class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // O(n log n)
        return unique(nums.begin(), nums.end()) != nums.end(); // O(n)
    }
};
