class Solution {
public:
    int appendCharacters(string s, string t) {
        int maxx=0,prev;
        for(int i=0;i<s.size();)
        {
            if(s[i]==t[0])
            {  int j=1,k=i+1,count=1;
               bool b=0;
                while(k<s.size()&&j<t.size())
                {
                    if(s[k]==t[0]&&b==0)
                    {
                      i=k;
                      b=1;
                    }
                    if(s[k]==t[j])
                    {
                    count++;
                    k++;
                    j++;
                    }
                    else 
                    k++;
                }
              maxx=max(count,maxx);
             if(b==0)break;
            }
            else
            {
                i++;
            }
            if(maxx==t.size())return 0;
        }
        
        return t.size()-maxx;
    }
};