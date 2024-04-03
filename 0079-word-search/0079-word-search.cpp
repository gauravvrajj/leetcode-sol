class Solution {
public:
    
    bool dfs(vector<vector<char>>&board,int i,int j,int k,string& word,vector<vector<bool>>& visited)
    {
        if(k==word.size())
            return 1;
        if(i>=board.size()||i<0||j>=board[0].size()||j<0)
            return 0;
        if(board[i][j]!=word[k]||visited[i][j]==1)
            return 0;
        visited[i][j]=1;
        bool b= dfs(board,i+1,j,k+1,word,visited)||
        dfs(board,i,j+1,k+1,word,visited)||
        dfs(board,i-1,j,k+1,word,visited)||
        dfs(board,i,j-1,k+1,word,visited);
        if(b==0)
            visited[i][j]=0;
        return b;
    }
    bool exist(vector<vector<char>>& board, string word) {
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                vector<vector<bool>>visited(board.size(),vector<bool>(board[0].size(),0));
                if(board[i][j]==word[0])
                    if(dfs(board,i,j,0,word,visited))
                        return 1;
            }
        }
        
        return 0;
        
    }
};