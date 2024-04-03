class Solution {
public:
    
    bool dfs(vector<vector<char>>&board,int i,int j,int k,string& word)
    {
        if(k==word.size())
            return 1;
        if(i>=board.size()||i<0||j>=board[0].size()||j<0)
            return 0;
        if(board[i][j]!=word[k]||board[i][j]=='#')
            return 0;
        char ch=board[i][j];
        board[i][j]='#';
        bool b= dfs(board,i+1,j,k+1,word)||
        dfs(board,i,j+1,k+1,word)||
        dfs(board,i-1,j,k+1,word)||
        dfs(board,i,j-1,k+1,word);
        board[i][j]=ch;
        return b;
    }
    bool exist(vector<vector<char>>& board, string word) {
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
               
                if(board[i][j]==word[0])
                    if(dfs(board,i,j,0,word))
                        return 1;
            }
        }
        
        return 0;
        
    }
};