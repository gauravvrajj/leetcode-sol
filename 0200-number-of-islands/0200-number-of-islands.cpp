class Solution {
public:
    
    void dfs(vector<vector<char>>& grid, vector<vector<bool>>& visited,int i,int j)
    {
        if(i<0||i>=grid.size()||j<0||j>=grid[0].size()||grid[i][j]=='0'||visited[i][j]==true)
        return;
        visited[i][j]=true;
        dfs(grid,visited,i+1,j);
        dfs(grid,visited,i,j+1);
        dfs(grid,visited,i-1,j);
        dfs(grid,visited,i,j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        
        vector<vector<bool>>visited(grid.size(),vector<bool>(grid[0].size(),0));
        int count=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(visited[i][j]==0&&grid[i][j]!='0')
                {
                    dfs(grid,visited,i,j);
                    count++;
                }
            }
        }
        return count;
        
    }
};