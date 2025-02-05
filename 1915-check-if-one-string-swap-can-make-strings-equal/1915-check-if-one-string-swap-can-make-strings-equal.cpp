class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1 == s2) return true; // Already equal

        vector<int> diff;  // Store differing indices
        
        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] != s2[i]) {
                diff.push_back(i);
            }
        }

        if (diff.size() != 2) return false;
        swap(s2[diff[0]], s2[diff[1]]);
        return s1 == s2;
    }
};