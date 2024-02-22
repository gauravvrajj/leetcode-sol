class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        if(n==1)
        {
            if(trust.size()==0)
                return 1;
            else 
                return -1;
        }
        
        vector<int>a(n+1,0);
        for(auto i:trust)
            a[i[0]]=1;
        
        int ans=-1,count=0;
        for(int i=1;i<=n;i++)
        {
            if(count>1)
                return -1;
            
            if(a[i]==0)
            {
                ans=i;
                count++;
            }
        }
        if(ans==-1)
            return -1;
        unordered_map<int,vector<int>>gg;
        for(auto i:trust)
        {
            if(i[1]==ans)
                gg[i[1]].push_back(i[0]);
        }
        
        for(auto i:gg)
        {
            if(i.second.size()==n-1)
                return ans;
        }
        return -1;
    }
};