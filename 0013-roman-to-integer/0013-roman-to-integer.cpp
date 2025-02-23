class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> roman;
        roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int res=0;
        for(int i=0;i<s.size()-1;i++){
            if(roman[s[i]]<roman[s[i+1]]){
                res-=roman[s[i]];
            }
            else{
                res+=roman[s[i]];
            }
        }
        return res+roman[s[s.size()-1]];
    }
};