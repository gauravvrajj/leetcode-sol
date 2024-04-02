class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        unordered_map<char,char>gg;
        unordered_map<char,char>pp;
        if(s.size()!=t.size())return 0;
        
        for(int i=0;i<s.size();i++){
          
          if(gg.count(s[i]))
          {
              if(gg[s[i]]!=t[i])
                  return 0;
          }
            else
            {
                if(pp.count(t[i]))
                    return 0;
                gg[s[i]]=t[i];
                pp[t[i]]=s[i];
            }
            
        }
        return 1;
    }
};