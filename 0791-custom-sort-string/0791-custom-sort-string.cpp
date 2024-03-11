class Solution {
public:
    string customSortString(string order, string s) {
        
        unordered_map<char,int>gg;
        for(auto i:s)
            gg[i]++;
        
        string a="";
        for(auto i:order)
        {
            if(gg.count(i))
            {
               for(int j=0;j<gg[i];j++)
                   a+=i;
                gg.erase(i);
            }
        }
        for(auto i:gg)
        {
            for(int j=0;j<i.second;j++)
            {
                a+=i.first;
            }
        }
        
        
       return a; 
    }
};