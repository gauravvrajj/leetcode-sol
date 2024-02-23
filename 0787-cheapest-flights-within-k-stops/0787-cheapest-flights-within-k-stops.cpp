class Solution {
public:
    
   int ans=INT_MAX; 
    void dfs(int sum,int n,vector<int>lis[],vector<vector<int>>&price,int src,int dst,int k)
    {       
        if(src==dst)
             {  ans=min(ans,sum);
                 return;
             }
         for(auto i:lis[src])
         {
             if(k==-1)
                 return;
             dfs(sum+price[src][i],n,lis,price,i,dst,k-1);
                 
         }
    }
    int findCheapestPrice(int n, vector<vector<int>>& flights, int s, int d, int K) {
        const int INF = 1e9;
        vector<vector<int>> dp(K + 2, vector<int>(n, INF));
        dp[0][s] = 0;        
         for (int i = 1; i <= K + 1; ++i) {
            dp[i][s] = 0;
            for (const auto& x : flights)
                  dp[i][x[1]] = min(dp[i][x[1]], dp[i-1][x[0]] + x[2]);    
            }
            return dp[K + 1][d] >= INF ? -1 : dp[K + 1][d];
            
        } 
    
    
//     int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
//         vector<vector<int>>price(101,vector<int>(101,0));
        
//         for(auto i:flights)
//         {
//             price[i[0]][i[1]]=i[2];
//         }
//         vector<int>lis[n];
      
        
//         for(auto i:flights)
//             lis[i[0]].push_back(i[1]);
    
//         dfs(0,n,lis,price,src,dst,k);
//         return ans==INT_MAX?-1:ans;
//     }
};
    
