class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(char ind : jewels){
            for(char i : stones){
                if(ind == i){
                    count++;
                }
            }
        }
        return count;
    }
};