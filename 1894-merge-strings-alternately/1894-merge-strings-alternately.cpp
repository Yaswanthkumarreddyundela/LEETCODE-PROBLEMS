class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string k ="";
        int i=0 , n1 = word1.size() , n2 = word2.size();

        while(i<n1 || i<n2){
            if(i<n1){
                k+=word1[i];
            }
            if(i<n2){
                k+=word2[i];
            }
            i++;
        }
        return k;
        
    }
};