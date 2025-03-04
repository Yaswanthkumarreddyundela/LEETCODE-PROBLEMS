class Solution {
public:
    bool checkPowersOfThree(int n) {
        int rem=0;
        while(n>0){
            rem = n % 3;
            if(rem > 1){
                return false;
            }
            n = n / 3;
        }
        return true;
    }
};