class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 0) return true;
        string k;
        for(char ch : s){
            if(isalnum(ch)){
                k+= tolower(ch);
            }
            
        }
        cout<<k;
        int left =0 , right= k.size()-1;
        while(left<right){
            if(k[left] == k[right]){
                left++;
                right--;
            }else return false;
        }
        return true;
    }
};