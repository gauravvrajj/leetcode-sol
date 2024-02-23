class Solution {
public:
 
    int dfs(int n,vector<int>lis[],vector<vector<int>>&price,int src,int dst,int k,vector<vector<int>>&dp)
    {       
        if(src==dst)
        return 0;
             
        if(k==-1)
        return 100000;
        
        if(dp[src][k]!=-1)
        return dp[src][k];
        
        int ans=100000;
         for(auto i:lis[src])
         {
             
            ans=min(ans, price[src][i]+dfs(n,lis,price,i,dst,k-1,dp));
                 
         }
        return dp[src][k]=ans;
    }

    
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        vector<vector<int>>price(101,vector<int>(101,0));
        vector<vector<int>>dp(101,vector<int>(k+2,-1));
        
        for(auto i:flights)
        {
            price[i[0]][i[1]]=i[2];
        }
        vector<int>lis[n];
      
        
        for(auto i:flights)
            lis[i[0]].push_back(i[1]);
         int as=dfs(n,lis,price,src,dst,k,dp);
         return as==100000?-1:as;
       
    }
};
    
