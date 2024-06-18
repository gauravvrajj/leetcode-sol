class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>>gg;
        for(int i=0;i<profit.size();i++)
        {
            gg.push_back({difficulty[i],profit[i]});
        }
        
        priority_queue<int>x;
        sort(worker.begin(),worker.end());
        sort(gg.begin(),gg.end());
        int i=0,j=0,ans=0;
        while(i<worker.size())
        {
            for(;j<gg.size();j++)
            {
               if(gg[j].first>worker[i])
                   break;
                else
                {
                    x.push(gg[j].second);
                }
            }
            if(x.size())
            {
               ans+=x.top(); 
            }
            i++;
        }
        
        return ans;
        
    }
};