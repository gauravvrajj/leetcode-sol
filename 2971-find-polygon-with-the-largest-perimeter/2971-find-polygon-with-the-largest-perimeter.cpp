class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long sum=0;
        for(auto i:nums)
            sum+=i;
        
        for(int i=nums.size()-1;i>=0;i--)
        {
            sum-=nums[i];
            if(nums[i]>=sum)
                continue;
            else
                return sum+nums[i];
        }
        return -1;
    }
};