class Solution {
public:
    string clearDigits(string s) {
        string updated ="";
        for(char ch : s){
            if(isdigit(ch)){
                updated.pop_back();
            }
            else{
                updated.push_back(ch);
            }
        }
        return updated;
    }
};