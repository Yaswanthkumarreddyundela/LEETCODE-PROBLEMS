class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int i : nums) {
            if (seen.find(i) != seen.end()) // Duplicate found
                return true;
            seen.insert(i);
        }
        return false;
    }
};
