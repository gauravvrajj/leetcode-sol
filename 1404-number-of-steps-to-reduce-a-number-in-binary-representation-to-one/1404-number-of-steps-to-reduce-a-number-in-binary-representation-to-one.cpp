class Solution {
public:
    int numSteps(string s) {
        int i=s.size()-1,count=0;
        while(s.size()>1){
           i=s.size()-1;
           if(s[i]=='1')
           {
               int extra=1,j=i;
               while(j>=0&&extra==1)
               {
                   if(s[j]=='1')
                   {
                      s[j]='0';
                   }
                   else
                   {
                       s[j]='1';
                       extra=0;
                   }
                   j--;
               }
               if(extra==1){
                   s='1'+s;
               }
           }
            else
            {
                s.pop_back();
            }
            count++;
            // cout<<s<<" ";
        }
        
      return count;  
        
    }
};