class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    
        unordered_map<char,int>gg;
        int ans=0,size=0;
        for(int i=0;i<s.size();i++)
        {
          if(gg.find(s[i])!=gg.end())
          {   size=i-gg[s[i]];  
              ans=max(ans,size);
              int j=gg[s[i]]+1;
              gg.clear();
              for(;j<=i;j++)
              {
                  gg[s[j]]=j;
              }
              
          }
            else
            {  gg[s[i]]=i;
                size++;
             ans=max(ans,size);
            }
        }
        return ans;
    }
};