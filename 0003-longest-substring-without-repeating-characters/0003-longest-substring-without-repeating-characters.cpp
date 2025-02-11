class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string lss = "";
        int max1=0;
        for(char ch : s){
            if(lss.find(ch) == std::string::npos){
                lss.push_back(ch);
                max1= max(max1 , static_cast<int>(lss.length()));

            }
            else{
                lss = lss.erase(0,lss.find(ch)+1);
                lss.push_back(ch);
            }
        }
        return max1;
    }
};