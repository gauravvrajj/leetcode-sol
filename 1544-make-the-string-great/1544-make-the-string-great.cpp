class Solution {
public:
    string makeGood(string s) {
        
        string g="";
        
        stack<char>gg;
        gg.push(s[0]);
        char c=gg.top();
        for(int i=1;i<s.size();i++)
        {
            if(gg.size())
            c=gg.top();
            if(gg.size()&&((s[i]-'a'==c-'A')||(s[i]-'A'==c-'a')))
            {
                gg.pop();
                continue;
            }
            
            gg.push(s[i]);
                
        }
        
        while(gg.size())
        {
            g+=gg.top();
            gg.pop();
        }
        reverse(g.begin(),g.end());
      return g;  
    }
};