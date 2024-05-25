class Solution {
public:
    vector<string>ans;
    void bk(string& s,unordered_set<string>& gg, int l,string g,string sen){
        
        if(l==s.size())
        {
            sen.pop_back();
            ans.push_back(sen);
            return;
        }
        
        for(int i=l;i<s.size();i++)
        {
             g+=s[i];
          if(gg.count(g))
          {
              
              bk(s,gg,i+1,"",sen+g+" ");
              
          }
           
        }
    }
    
    
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        
        
        
        unordered_set<string>gg;
        for(auto i:wordDict)
            gg.insert(i);
        
        bk(s,gg,0,"","");
        
        return ans;
        
    }
};