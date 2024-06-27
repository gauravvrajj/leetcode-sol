class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        
        vector<vector<int>>gg(edges.size()+2);
        
        for(auto i:edges)
        {
            gg[i[0]].push_back(i[1]);
            gg[i[1]].push_back(i[0]);
        }
        int ans=-1,siz=INT_MIN;
        for(int i=0;i<gg.size();i++)
        {   int n=gg[i].size();
            if(n>siz)
            {
                ans=i;
                siz=gg[i].size();
            }
        }
        return ans;
    }
};