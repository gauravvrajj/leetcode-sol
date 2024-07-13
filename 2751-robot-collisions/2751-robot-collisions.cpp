class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        vector<pair<int,pair<int,char>>>x(positions.size());
        for(int i=0;i<positions.size();i++)
        {
            x[i].first=(positions[i]);
            x[i].second.first=healths[i];
            x[i].second.second=directions[i];
        }
        
        sort(x.begin(),x.end());
        
        // for(auto i:x)
        // {
        //     cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<endl;
        // }
        stack<pair<int,pair<int,char>>>gg;
        int i=0;
        while(i<x.size())
        {
            if(x[i].second.second=='L'&&gg.size()&&gg.top().second.second=='R')
            {
                pair<int,pair<int,char>>y=gg.top();
                if(x[i].second.first==y.second.first)
                {
                    gg.pop();
                    i++;
                }
                else if(x[i].second.first>y.second.first)
                {
                    gg.pop();
                    x[i].second.first--;
                }
                else
                {
                    gg.pop();
                    y.second.first--;
                    gg.push(y);
                    i++;
                }
            }
            else
            {
                gg.push(x[i]);
                i++;
            }
            
        }
        
        unordered_map<int,int>ans;
        while(gg.size())
        {
            ans[gg.top().first]=gg.top().second.first;
            gg.pop();
        }
        
        vector<int>an;
        for(auto i:positions)
        {
           if(ans.count(i))
           {
               an.push_back(ans[i]);
           }
        }
    
        return an;
        
    }
};