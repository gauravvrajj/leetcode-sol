class Solution {
public:
    
    void dfs(int node,vector<vector<int>>&gg,vector<int>&visited,vector<vector<int>>&ans,int x)
    {
        if(visited[node])
        return;
        if(node!=x)
        ans[node].push_back(x);
        visited[node]=1;
        for(auto i:gg[node])
        {
            dfs(i,gg,visited,ans,x);
        }
        
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>>ans(n);
        vector<vector<int>>gg(n);
        for(auto i:edges)
        {
          gg[i[0]].push_back(i[1]);
        }
        
        for(int i=0;i<n;i++)
        { vector<int>g;
         vector<int>visited(n,0);
            dfs(i,gg,visited,ans,i);
        }
        
        return ans;
    }
};