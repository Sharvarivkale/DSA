class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;
     if (matrix.empty())
    return {};
    // cal the row and the col
    int row=matrix.size();
    int col=matrix[0].size();
  
    //initilization
    int startcol=0;
    int endcol=col-1;
    int startrow=0;
    int endrow=row-1;

    //find out the count and the total ele
    int count=0;
    int total=row*col;

    //here count are used for the check the element should not go beyond that still get reamin in it

    while(count<total){
        //printing the first row
        //here the all time statrow are reamin the same
        for(int index=startcol;count<total && index<=endcol;index++){
            ans.push_back(matrix[startrow][index]);
            count++;
        }
        startrow++;

        //printing the ending col
        for(int i=startrow;count<total && i<=endrow;i++){
            ans.push_back(matrix[i][endcol]);
            count++;
        }
        endcol--;//here the endcol are reamin the same

        //printing the endrow
        for(int i=endcol;count<total && i>=startcol;i--){
            ans.push_back(matrix[endrow][i]);
            count++;
        }
        endrow--;//here ending row are become get the constant;

        //printing the firstrow
        for(int i=endrow;count<total && i>=startrow;i--){
            ans.push_back(matrix[i][startcol]);
            count++;
        }
        startcol++;//here startcol col are become get the constant;
    }
     return ans;   
    }
};