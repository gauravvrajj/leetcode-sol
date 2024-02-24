class Solution {
public:

    void dfs(int n,vector<pair<int,int>>x[],int start,vector<int>&visited,int prev)
    {  
        
        for(auto i:x[start])
        {
           if(prev<=i.second&&visited[i.first]>i.second)
           {
           visited[i.first]=i.second;
           dfs(n,x,i.first,visited,i.second); 
           }
        }
        
    }
    
    
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        
        vector<pair<int,int>>x[n];
        x[0].push_back({firstPerson,0});
        x[firstPerson].push_back({0,0});
        for(int i=0;i<meetings.size();i++)
        {
            x[meetings[i][0]].push_back({meetings[i][1],meetings[i][2]});
            x[meetings[i][1]].push_back({meetings[i][0],meetings[i][2]});
        }
      
        vector<int>visited(n,INT_MAX);
   
       
        dfs(n,x,0,visited,0);
        
         vector<int>ans;
         for(int i=0;i<n;i++)
         if(visited[i]!=INT_MAX)
             ans.push_back(i);
        
        return ans;
      
    }
};