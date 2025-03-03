class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int min1 = INT_MAX;
        unordered_map<char,int> freq;
        for(char i : text){
            freq[i]++;
        }
        unordered_map<char, int> required = {{'b', 1}, {'a', 1}, {'l', 2}, {'o', 2}, {'n', 1}};
        int minCount = INT_MAX; // Start with the maximum possible value
        for (auto &[c, needed] : required) {
            if (freq.find(c) == freq.end()) return 0; // If a required char is missing
            minCount = min(minCount, freq[c] / needed);
        }
        return minCount;
    }
};