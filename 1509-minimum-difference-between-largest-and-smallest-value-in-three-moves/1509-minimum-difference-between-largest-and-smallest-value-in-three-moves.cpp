class Solution {
public:
    int minDifference(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int  n=nums.size();
        int ans=INT_MAX;
        if(nums.size()<=3)return 0;
        
        return min({nums[n-4]-nums[0],nums[n-1]-nums[3],nums[n-2]-nums[2],nums[n-3]-nums[1]});
        
    }
};