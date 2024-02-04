class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>gg;
        int diff=0;
        for(int i=0;i<nums.size()-1;i++)
        {
           diff= diff+nums[i+1]-nums[i];
           if(diff<=k)
           {
               gg.push_back(nums[i]);
           }
            else
                return {};
            if(gg.size()==2)
               {
                   gg.push_back(nums[i+1]);
                   i++;
                   ans.push_back(gg);
                   gg.clear();
                   diff=0;
               }
        }
        
        // gg.push_back(nums[nums.size()-1]);
        // ans.push_back(gg);
        return ans;
    }
};