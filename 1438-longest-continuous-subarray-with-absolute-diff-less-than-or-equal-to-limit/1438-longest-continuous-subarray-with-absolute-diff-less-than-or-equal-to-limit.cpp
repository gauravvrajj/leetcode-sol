class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        
        multiset<int>gg;
        int left=0,ans=0;
        
        for(int right=0;right<nums.size();right++)
        {
            gg.insert(nums[right]);
            
            while(*gg.rbegin()-*gg.begin()>limit)
            {
                gg.erase(gg.find(nums[left]));
                left++;
            }
            ans=max(ans,right-left+1);
        }
        
        return ans;
    }
};