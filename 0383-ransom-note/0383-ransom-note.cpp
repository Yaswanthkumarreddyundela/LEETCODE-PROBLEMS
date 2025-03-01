class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mag;
        for(char i : magazine){
            mag[i]++;
        }
        for(char i : ransomNote){
            if(mag[i] >0){
                mag[i]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};