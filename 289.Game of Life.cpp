class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int row=board.size();
        int col=board[0].size();
        vector<vector<bool>> nextState(row,vector<bool>(col,false));
       for(int i=0;i<row;i++){
           for(int j=0;j<col;j++){
               int count=0;
               //�ɤO�k�A�K�Ӥ�쳣��L�@�����X��1
               if(i-1>=0) {
                   if(j-1>=0)
                       count+=board[i-1][j-1];
                   count+=board[i-1][j];
                   if(j+1<col)
                       count+=board[i-1][j+1];
               }
               if(j-1>=0)
                   count+=board[i][j-1];
               if(j+1<col)
                   count+=board[i][j+1];
               if(i+1<row){
                   if(j-1>=0)
                       count+=board[i+1][j-1];
                   count+=board[i+1][j];
                   if(j+1<col)
                    count+=board[i+1][j+1];
               }
               //�w�]�U�����A��0�A�ŦX����~�]��1
               if((board[i][j]==0&&count==3)||(board[i][j]==1&&(count==2||count==3)))
                   nextState[i][j]=true;
           }
       }
        for(int i=0;i<row;i++)
            for(int j=0;j<col;j++)
                board[i][j]=nextState[i][j];
    }
};
