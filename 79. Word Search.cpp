class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++)
            for(int j=0;j<board[0].size();j++)
                if(dfs(board,i,j,word,0))
                    return true;
        return false;
    }
    bool dfs(vector<vector<char>>& board,int i,int j,string& word,int pos){
        if(pos==word.length())
            return true;
        //��ɩΨϥιL���r
        if(i<0||i>=board.size()||j<0||j>=board[0].size()||board[i][j]=='0')
            return false;
        if(board[i][j]!=word[pos])
            return false;
        board[i][j]='0';
        bool res=dfs(board,i+1,j,word,pos+1)||dfs(board,i,j+1,word,pos+1)||dfs(board,i-1,j,word,pos+1)||dfs(board,i,j-1,word,pos+1);
        //����dfs�n�]�w�^��l���A
        board[i][j]=word[pos];
        return res;
    }
};
