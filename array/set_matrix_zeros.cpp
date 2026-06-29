class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int row_num =matrix.size();
       int col_num=matrix[0].size();
       vector<int> row(row_num, 0);
       vector<int> col(col_num, 0);

       for(int i=0;i<row_num;i++){
        for(int j=0;j<col_num;j++){
          if(matrix[i][j]==0){
            row[i]=1;
            col[j]=1;
          }
        }
       }

       for(int i=0;i<row_num;i++){
        for(int j=0;j<col_num;j++){
          if(row[i]==1||col[j]==1){
            matrix[i][j]=0;
          }
        }
       }
        
    }
};