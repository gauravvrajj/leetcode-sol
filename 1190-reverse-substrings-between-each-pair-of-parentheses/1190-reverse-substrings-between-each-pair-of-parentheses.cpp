class Solution {
public:
    string reverseParentheses(string s) {
        
        stack<char>gg;
        int i=0;
        while(i<s.size())
        {
            if(s[i]==')')
            {
                string k="";
                while(true)
                {
                    if(gg.top()=='(')
                    {
                        gg.pop();
                        int m=0;
                        while(m<k.size())
                        {
                            gg.push(k[m]);
                            m++;
                        }
                        break;
                    }
                    
                    k+=gg.top();
                    gg.pop();
                    
                }
            }
            else
            {
                gg.push(s[i]);
            }
            i++;
        }
        string ans="";
        while(gg.size())
        {
           ans+=gg.top();
            gg.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};