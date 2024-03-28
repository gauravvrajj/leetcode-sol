class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        
        unordered_map<int,int>gg;
        
        int left=0,right=0;
        int count=0,ans=0;
        while(right<nums.size())
        {
            gg[nums[right]]++;
            count++;
            while(gg[nums[right]]>k)
            {
               if(gg[nums[left]]==gg[nums[right]])
               {
                   left++;
                   count--;
                   gg[nums[right]]--;
                   break;
               }
                gg[nums[left]]--;
                left++;
                count--;
            }
            ans=max(ans,count);
            right++;   
        }
        
        return ans;
        
    }
};