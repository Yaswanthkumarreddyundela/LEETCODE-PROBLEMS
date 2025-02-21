class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>> k(numRows);
        for(int i=0;i<numRows;i++){
            k[i].resize(i + 1, 1);
            for(int j=1;j<i;j++){
                k[i][j] = k[i-1][j]+k[i-1][j-1];
            }

        }
        return k;
    }
};