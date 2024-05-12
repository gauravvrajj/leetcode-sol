class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>>gg;
        
        for(int i=0;i<grid.size()-2;i++)
        {  vector<int>ans;
            for(int j=0;j<grid.size()-2;j++)
            {   int maxx=0;
                for(int k=i;k<i+3;k++)
                {
                    for(int l=j;l<j+3;l++)
                    {
                        maxx=max(maxx,grid[k][l]);
                    }
                }
             
                ans.push_back(maxx);
            }
         gg.push_back(ans);
        }
        return gg;
    }
};