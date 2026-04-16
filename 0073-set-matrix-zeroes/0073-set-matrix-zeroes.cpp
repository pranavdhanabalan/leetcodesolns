class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> order;
        for (int i=0;i<matrix.size();i++){
            for (int j=0;j<matrix[i].size();j++){
                if (matrix[i][j]==0){
                    order.push_back({i,j});   
                }
            }
        }
        for (auto it: order){
            for (int k=0;k<matrix[0].size();k++){
                matrix[it.first][k]=0;
            }
            for (int k=0;k<matrix.size();k++){
                matrix[k][it.second]=0;
            }
        }
    }
};