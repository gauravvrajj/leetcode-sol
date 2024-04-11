class Solution {
public:
    string removeKdigits(string num, int k) {
        
       stack<char>gg;
        gg.push(num[0]);
        int i;
        for(i=1;i<num.size();i++)
        {
             if(num[i]>=gg.top())
             {
                 gg.push(num[i]);
                 continue;
             }
            else
            {
               while(gg.size()&&gg.top()>num[i]&&k>0)
               {
                   gg.pop();
                   k--;
               }
                if(k==0)
                break;
                gg.push(num[i]);
            }
        }
        
        if(k>0)
        {
            while(gg.size()&&k>0)
            {
             gg.pop();
             k--;
            }
        }
        string m="";
        while(gg.size())
        { 
          m+=gg.top();
          gg.pop();
        }
        reverse(m.begin(),m.end());
        while(i<num.size())
        {
            m+=num[i];
            i++;
        }
         int j=0;
          while(m[j]=='0')
          {
              m.erase(m.begin()+j);
          }
         return m==""?"0":m;
        
       
        
    }
};