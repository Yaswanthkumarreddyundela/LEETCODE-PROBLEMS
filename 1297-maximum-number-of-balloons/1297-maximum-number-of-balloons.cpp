class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string a = "balon";
        int count=0;
        int min1 = 10000000;
        unordered_map<char,int> freq;
        for(char i : text){
            freq[i]++;
        }
        for(char i : a){
            if(freq[i] > 0){
                count = freq[i];
                if(i == 'l' || i == 'o') count/=2;
                min1 = min(count,min1);
            }
            else{
                return 0;;
            }
        }
        return min1;
    }
};