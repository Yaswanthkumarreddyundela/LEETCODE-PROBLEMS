class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int maxdiff = 0;
        for(int i=1;i<prices.size();i++){
            if(min>prices[i]){
                min = prices[i];
            }
            maxdiff = max(maxdiff,prices[i]-min);

        }
        return maxdiff;
    }
};