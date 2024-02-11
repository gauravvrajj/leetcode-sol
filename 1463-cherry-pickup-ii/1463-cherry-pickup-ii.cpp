class Solution {
public:
    
    
    int gg(int row,int col1,int col2,vector<vector<int>>&grid,vector<vector<vector<int>>>&dp)
    {
        if(row==grid.size()||col1<0||col1>=grid[0].size()||col2<0||col2>=grid[0].size())
            return 0;
        if(dp[row][col1][col2]!=-1)
            return dp[row][col1][col2];
        int curr=grid[row][col1]+grid[row][col2];
        if(col1==col2)
            curr-=grid[row][col1];
        int ans=INT_MIN;
        ans=max(ans,curr+gg(row+1,col1+1,col2,grid,dp));
        ans=max(ans,curr+gg(row+1,col1,col2+1,grid,dp));
        ans=max(ans,curr+gg(row+1,col1+1,col2+1,grid,dp));
        
        ans=max(ans,curr+gg(row+1,col1-1,col2,grid,dp));
        ans=max(ans,curr+gg(row+1,col1,col2-1,grid,dp));
        ans=max(ans,curr+gg(row+1,col1-1,col2-1,grid,dp));
        
        ans=max(ans,curr+gg(row+1,col1,col2,grid,dp));
        ans=max(ans,curr+gg(row+1,col1+1,col2-1,grid,dp));
        ans=max(ans,curr+gg(row+1,col1-1,col2+1,grid,dp));
        
     return dp[row][col1][col2]=ans;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        
        vector<vector<vector<int>>>abc(grid.size()+1,vector<vector<int>>(grid[0].size()+1,vector<int>(grid[0].size()+1,-1)));
        return gg(0,0,grid[0].size()-1,grid,abc);
    }
};