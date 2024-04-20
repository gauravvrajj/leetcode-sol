class Solution {
public:
    int row=INT_MIN,col=INT_MIN;
    void dfs(int i,int j,vector<vector<int>>& land, vector<vector<int>>& visited)
    {
        if(i<0||j<0||i>=land.size()||j>=land[0].size()||land[i][j]==0||visited[i][j]==1)
            return;
        if(land[i][j]==1)
        {
            if(j>=col&&i>=row)
            {
                row=i;
                col=j;
            }
        }
        visited[i][j]=1;
        dfs(i+1,j,land,visited);
        dfs(i-1,j,land,visited);
        dfs(i,j+1,land,visited);
        dfs(i,j-1,land,visited);
    }
    
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>>ans;
        vector<vector<int>>visited(land.size(),vector<int>(land[0].size(),0));
        for(int i=0;i<land.size();i++)
        {
          for(int j=0;j<land[0].size();j++)
          {
              if(land[i][j]==1&&visited[i][j]==0)
              {
                  dfs(i,j,land,visited);
                  ans.push_back({i,j,row,col});
                  row=INT_MIN;
                  col=INT_MIN;
              }
          }
            
        }
       return ans; 
    }
};