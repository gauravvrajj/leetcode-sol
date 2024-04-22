class Solution {
public:
    
    vector<string> children(string& a)
    {
        vector<string>ans;
        for(int i=0;i<4;i++)
        {  string gg=a,pp=a;
            gg[i]=(gg[i]-'0'+1)%10+'0';
            ans.push_back(gg);
            pp[i]=(pp[i]-'0'-1+10)%10+'0';
            ans.push_back(pp);
        }
        // for(auto i:ans)
        //     cout<<i<<" ";
        return ans;
    }
    int openLock(vector<string>& deadends, string target) {
        
        unordered_set<string>visited(deadends.begin(),deadends.end());
        if(visited.count("0000"))return -1;
        queue<pair<string,int>>gg;
        gg.push({"0000",0});
        
        while(gg.size())
        {
            pair<string,int> m=gg.front();
            gg.pop();
            if(m.first==target)
                return m.second;
            for(auto child:children(m.first))
            {
                if(!visited.count(child))
                {
                    visited.insert(child);
                    gg.push({child,m.second+1});
                }
            }
        }
        
        return -1;
        
    }
};