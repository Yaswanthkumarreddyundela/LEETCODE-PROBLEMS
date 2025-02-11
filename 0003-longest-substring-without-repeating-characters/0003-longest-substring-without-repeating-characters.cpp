class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int left = 0, max1 = 0;

        for (int right = 0; right < s.length(); right++) {
            while (seen.count(s[right])) {
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[right]);
            max1 = max(max1, right - left + 1);
        }

        return max1;
    }
};