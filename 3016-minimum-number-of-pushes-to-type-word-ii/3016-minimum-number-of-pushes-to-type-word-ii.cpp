class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>gg;
        for(auto i:word)
        {
           gg[i]++; 
        }
        priority_queue<pair<int,char>>g;
        for(auto i:gg)
        {
            g.push({i.second,i.first});
        }
        
        int count=0,a=1,ans=0;
        while(g.size())
        {
           if(count==8)
           {
               a++;
               count=0;
           }
            int i=g.top().first;
            g.pop();
            ans+=a*i;
            count++;
        }
        
        return ans;        
    }
};