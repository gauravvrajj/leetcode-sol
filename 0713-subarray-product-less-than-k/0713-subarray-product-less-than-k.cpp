class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int pro=1,tot=0;
        for(int left=0,right=0;right<nums.size();right++)
        {
            pro*=nums[right];
            
            while(left<=right&&pro>=k)
            {
               pro/=nums[left++];
            }
            tot+=right-left+1;
        }
        return tot;
    }
};