class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int n=nums.size()-1;
        if(nums[n]<0&&nums[n-1]<0)
            return max(nums[0]*nums[1]*nums[2],nums[0]*nums[n]*nums[n-1]);
        return nums[0]*nums[1]*nums[2];
        
    }
};