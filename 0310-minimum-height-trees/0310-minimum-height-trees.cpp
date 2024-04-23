class Solution {
public:
    vector<int>ans;
    void dfs(vector<vector<int>>&gg,vector<int>& visited,int i,vector<int>&x)
    {
        if(!visited[i])
            x.push_back(i);
        visited[i]=1;
        for(auto j:gg[i])
        {
            if(!visited[j])
            {
            dfs(gg,visited,j,x);
            }
        }   
        if(x.size()>ans.size())
            ans=x;
        x.pop_back();
    }
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<vector<int>>gg(n);
        for(int i=0;i<edges.size();i++)
        {
           gg[edges[i][0]].push_back(edges[i][1]);
           gg[edges[i][1]].push_back(edges[i][0]);
        }
    
     
            vector<int>visited(n,0);
        vector<int>x;
            dfs(gg,visited,0,x);
            vector<int>visit(n,0);
        // cout<<ans.size();
        vector<int>y;
            dfs(gg,visit,ans[ans.size()-1],y);
        if(ans.size()%2==0)
            return {ans[ans.size()/2],ans[ans.size()/2-1]};
        
        return {ans[ans.size()/2]};
          
    }
};