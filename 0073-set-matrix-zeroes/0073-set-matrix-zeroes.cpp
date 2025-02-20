class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size(),col = matrix[0].size();
        bool firstRowZero = false, firstColZero = false;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j] == 0){
                    if (i == 0) firstRowZero = true;
                    if (j == 0) firstColZero = true;
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for (int i = 1; i < row; i++) {
            for (int j = 1; j < col; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
        if (firstRowZero) {
            for (int j = 0; j < col; j++) {
                matrix[0][j] = 0;
            }
        }
        if (firstColZero) {
            for (int i = 0; i < row; i++) {
                matrix[i][0] = 0;
            }
        }


        // for(int r : row){
        //     for(int j=0;j<matrix[r].size();j++){
        //         matrix[r][j] =0;
        //     }
        // }
        // for(int c : col){
        //     for(int j=0;j<matrix.size();j++){
        //         matrix[j][c] =0;
        //     }
        // }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        

    }
};