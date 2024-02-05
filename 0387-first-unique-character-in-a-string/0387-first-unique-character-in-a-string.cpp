class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char,int>gg;
        for(auto i:s)
            gg[i]++;
        
        for(int i=0;i<s.size();i++)
        {
            if(gg[s[i]]==1)
                return i;
        }
        
        return -1;
        
    }
};