class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mag;
        int count;
        for(char i : magazine){
            mag[i]++;
        }
        for(char i : ransomNote){
            if(mag.find(i) != mag.end() && mag[i] >0){
                mag[i]--;
                count++;
            }
            else{
                return false;
            }
            
        }
        return count == (int)ransomNote.size();
    }
};