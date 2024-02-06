class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>>gg;
        
        for(int i=0;i<strs.size();i++)
        {
            string g=strs[i];
            sort(g.begin(),g.end());
            gg[g].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto i:gg)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};