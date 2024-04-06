class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        stack<int>gg;
        stack<int>pp;
        int i=0;
        int count=0;
        while(i<s.size())
        {
           if(s[i]=='(')
               gg.push(i);
            if(gg.size()&&s[i]==')')
                gg.pop();
            else if(s[i]==')'&&gg.size()==0)
            {
                 pp.push(i);
            }
            i++;
        }
        
        vector<int>x;
        while(gg.size())
        {
            x.push_back(gg.top());
            gg.pop();
        }
        while(pp.size())
        {
            x.push_back(pp.top());
            pp.pop();
        }
        sort(x.begin(),x.end());
        string res="";
        int j=0;
        for(int i=0;i<s.size();i++)
        {
            if(j<x.size()&&x[j]==i)
            {
              j++;
                continue;
            }
            res+=s[i];
        }
        
        return res;
    }
};