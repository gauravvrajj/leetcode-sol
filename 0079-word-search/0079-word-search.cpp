class Solution {
public:
    
    bool dfs(vector<vector<char>>&board, string& word,vector<vector<bool>>&visited,int i,int j,int k)
    {
        if(k==word.size())
        return 1;
        if(i<0||j>=board[0].size()||i>=board.size()||j<0||visited[i][j])
        return 0;
        if(board[i][j]!=word[k])
        return 0;
        visited[i][j]=1;
        bool ans= dfs(board,word,visited,i+1,j,k+1)||
                  dfs(board,word,visited,i,j+1,k+1)||
                  dfs(board,word,visited,i-1,j,k+1)||
                  dfs(board,word,visited,i,j-1,k+1);
        visited[i][j]=0;
        return ans;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        
       
        for(int i=0;i<board.size();i++)
            for(int j=0;j<board[0].size();j++)
            {   bool b=0;
                if(board[i][j]==word[0])
                {
                    vector<vector<bool>>visited(board.size(),vector<bool>(board[0].size(),0));
                    b=dfs(board,word,visited,i,j,0);
                }
                if(b)
                    return b;
            }
        
        return 0;
        
    }
};