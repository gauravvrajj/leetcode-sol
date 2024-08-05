class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        
        unordered_map<string ,int>gg;
      
        for(auto i:arr)
            gg[i]++;
            
    
        for(auto i:arr)
        {
            if(gg[i]==1&&--k==0)
            return i;
        }
       
        return "";
        
    }
};