class Solution {
public:
    int ans=INT_MIN;
    void dfs(vector<vector<int>>&grid,int i,int j,int sum)
    {
        if(i<0||j>=grid[0].size()||i>=grid.size()||j<0||grid[i][j]==0)
        {
            ans=max(ans,sum);
            return;
        }
        int a=grid[i][j];
        grid[i][j]=0;
        dfs(grid,i+1,j,sum+a);
        dfs(grid,i,j+1,sum+a);
        dfs(grid,i,j-1,sum+a);
        dfs(grid,i-1,j,sum+a);
        grid[i][j]=a;
        
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]!=0)dfs(grid,i,j,0);
            }
        return ans==INT_MIN?0:ans;
    }
};