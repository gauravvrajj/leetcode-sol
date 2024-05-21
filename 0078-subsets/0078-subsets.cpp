class Solution {
public:
    
    vector<vector<int>> ans;
    
    void unique(int i,vector<int>&nums,vector<int>&gg)
    {
        ans.push_back(gg);
        for(int l=i;l<nums.size();l++)
        {
            gg.push_back(nums[l]);
      
            unique(l+1,nums,gg);
            
            gg.pop_back();
        
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>gg;
        unique(0,nums,gg);
        return ans;
        
    }
};