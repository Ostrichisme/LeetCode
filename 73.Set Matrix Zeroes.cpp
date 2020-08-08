class Solution
{
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<bool> row(r,false);
        vector<bool> col(c,false);
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                //�Ymatrix[i][j]==0�A���i�C�β�j�泣�n�]��0
                if(matrix[i][j]==0)
                {
                    row[i]=true;
                    col[j]=true;
                }
            }
        }
        for(int i=0; i<r; i++)
        {
            if(row[i])
            {
                for(int j=0; j<c; j++)
                    matrix[i][j]=0;
            }
        }
        for(int i=0; i<c; i++)
        {
            if(col[i])
            {
                for(int j=0; j<r; j++)
                    matrix[j][i]=0;
            }
        }


    }
};
