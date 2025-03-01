class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>freq;
        unordered_map<char,int>freq1;
        for(char i : t){
            freq[i]++;
        }
        for(char i : s){
            freq1[i]++;
        }
        for(char i : t){
            if(freq[i] != freq1[i]){
                return false;
            }
        }
        return true && s.size() == t.size();

    }
};