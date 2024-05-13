class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        
        for(int j=0;j<grid.size();j++)
        {
            if(grid[j][0]==0)
            {
                for(int i=0;i<grid[0].size();i++)
                {
                    if(grid[j][i]==0)
                    grid[j][i]=1;
                    else
                        grid[j][i]=0;
                    
                }
                
            }
        }
        
        
        for(int i=1;i<grid[0].size();i++)
        { int count=0;
            for(int j=0;j<grid.size();j++)
            {
                if(grid[j][i]==0)count++;
            }
         if(count>grid.size()/2)
         {
            for(int j=0;j<grid.size();j++)
            {
                if(grid[j][i]==0)grid[j][i]=1;
                else grid[j][i]=0;
            } 
             
         }
        }
        
        // for(auto i:grid){
        //     for(auto j:i)
        //         cout<<j;
        //     cout<<endl;
        //     }
                
         int score = 0,n=grid[0].size();
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < n; j++) {
                // Left shift bit by place value of column to find column contribution
                int columnScore = grid[i][j] << (n - j - 1);
                // Add contribution to score
                score += columnScore; 
            }
        }
        
        
        
        
       return score; 
        
    }
};