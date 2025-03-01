class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>freq;
        for(char i : t){
            freq[i]++;
        }
        for(char i : s){
            freq[i]--;
        }
        for(auto i : freq){
            if(i.second!=0){
                return false;
            }
        }
        return true ;

    }
};