class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        const int row=matrix.size();
        if(row==0||row==1) return;
        // transponse matrix
        for(int i=0;i<row;i++)
            for(int j=i;j<row;j++)
                swap(matrix[i][j],matrix[j][i]);
        // 每列的element都做反轉
        for(int i=0;i<row;i++)
            reverse(matrix[i].begin(),matrix[i].end());
    }
};
