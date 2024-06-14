class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        stack<int>gg;
        gg.push(nums[0]);
        int count=0;
        for(int i=1;i<nums.size();)
        {
           if(i<nums.size()&&(nums[i]==gg.top()||nums[i-1]>=nums[i]))
           {
               while(i<nums.size()&&gg.size()&&nums[i]==gg.top())
               {
                   count+=nums[i-1]-nums[i]+1;
                   nums[i]=nums[i-1]+1;
                   i++;
               }
               if(i<nums.size()&&nums[i-1]>=nums[i])
               {
                   gg.pop();
                   gg.push(nums[i]);
                   count+=nums[i-1]-nums[i]+1;
                   nums[i]=nums[i-1]+1;
                   i++;
                   continue;
               }
           } 
           if(i<nums.size()&&gg.size())
           {
               gg.pop();
               gg.push(nums[i]);
               i++;
           }
        }
        
        
        return count;
    }
};