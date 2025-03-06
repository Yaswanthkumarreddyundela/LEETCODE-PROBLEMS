class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int>freq;
        int n = grid.size();
        int rep=0;
        int ts = (n*n)*(n*n + 1)/2;
        int sum=0;
        for(vector v : grid){
            for(int i : v){
                sum+=i;
                freq[i]++;
                if(freq[i] >1){
                    rep = i;
                }
            }
        }
        
        return {rep,rep+(ts-sum)} ;
    }
};