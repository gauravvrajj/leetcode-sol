class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
      unordered_map<int,int>gg;
        int maxx=INT_MIN,ans;
        for(auto i:nums)
        {
         gg[i]++;
         
         maxx=max(maxx,gg[i]);
            if(maxx==gg[i])
                ans=i;
        }
        
      return ans;  
    }
};