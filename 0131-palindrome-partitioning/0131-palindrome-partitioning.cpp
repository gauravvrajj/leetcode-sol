class Solution {
public:
    vector<vector<string>>ans;
    void part(int i,string s, vector<string>& party, string test)
    {
        if(i==s.size())
            ans.push_back(party);
        
        string gg;
        for(int l=i;l<s.size();l++)
        {
            gg=s[l]+gg;
            string y=gg;
            reverse(y.begin(),y.end());
            if(y!=gg)
                continue;
            party.push_back(gg);
            part(l+1, s,party, gg);
            party.pop_back();
            
            
        }
        
        
    }
    vector<vector<string>> partition(string s) {
       
        vector<string>party;
        string test="";
        part(0,s,party,test);
        
        return ans;
    }
};

