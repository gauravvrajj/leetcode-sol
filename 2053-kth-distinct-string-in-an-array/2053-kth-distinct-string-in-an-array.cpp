class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        
        unordered_map<string ,int>gg;
      
        for(auto i:arr)
            gg[i]++;
            
        
        vector<string>x;
        for(auto i:arr)
        {
            if(gg[i]==1)
            x.push_back(i);
        }
        if(k>x.size())return "";
        return x[k-1];
        
    }
};