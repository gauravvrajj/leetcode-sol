class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        multiset<char>gg;
      
        for(auto j:words[0])
          gg.insert(j);
        
        
        for(int i=1;i<words.size();i++)
        {
            multiset<char>pp;
            for(int j=0;j<words[i].size();j++)
            {
                if(gg.count(words[i][j])){
                    pp.insert(words[i][j]);
                    gg.erase(gg.find(words[i][j]));
                }
            }
            gg=pp;
        }
        vector<string>ans;
        for(auto i:gg)
        {
            string s(1,i);
            ans.push_back(s);
        }
       return ans; 
    }
};