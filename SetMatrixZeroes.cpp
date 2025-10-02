class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<vector<int>> newM = matrix;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(newM[i][j] == 0){
                    for(int k = 0; k < n; k++){
                        matrix[i][k] = 0;
                    }

                    for(int k = 0; k < m; k++){
                        matrix[k][j] = 0;
                    }
                }
            }
        }
    }
};