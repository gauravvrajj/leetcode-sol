class Solution {
public:
    int maximumGain(string s, int ab, int ba) {
        
        
        stack<char>gg;
        int ans=0;
        if(ab>ba){
        for(auto i:s)
        {
          if(i=='b')
          {
              if(gg.size()&&gg.top()=='a'){
                  ans+=ab;
                  gg.pop();
              }
              else
              {
                  gg.push(i);
              }
          }
            else
            {
                gg.push(i);
            }
        }
        }
        else{
            
        for(auto i:s)
        {
          if(i=='a')
          {
              if(gg.size()&&gg.top()=='b'){
                  ans+=ba;
                  gg.pop();
              }
              else
              {
                  gg.push(i);
              }
          }
            else
            {
                gg.push(i);
            }
        }
        }
        string x="";
        while(gg.size())
        {
          x+=gg.top();
            gg.pop();
        }
        reverse(x.begin(),x.end());
        cout<<x<<" "; 
        for(auto i:x){
            if(i=='a')
        {
              if(gg.size()&&gg.top()=='b'){
                  ans+=ba;
                  gg.pop();
              }
                else
                    gg.push(i);
          }
               else if(i=='b')
               {
                   if(gg.size()&&gg.top()=='a'){
                  ans+=ab;
                       gg.pop();
                   }
                   else
                       gg.push(i);
               }
               
               else
               gg.push(i);     
    }
        return ans;
               }
};