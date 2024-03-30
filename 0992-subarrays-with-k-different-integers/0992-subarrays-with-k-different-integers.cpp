class Solution {
public:
     int subarraysWithKDistinct(vector<int>& nums, int k) {
        return slidingWindowAtMost(nums, k) - slidingWindowAtMost(nums, k - 1);
    }
    int slidingWindowAtMost(vector<int>& nums, int k) {
     unordered_map<int,int>gg;
        int count=0;
        int right=0,left=0;
        for(right=0,left=0;right<nums.size();right++)
        {
              gg[nums[right]]++;
             
            
                    while(gg.size()>k)
                    {   
                        gg[nums[left]]--;
                        if(gg[nums[left]]==0)
                        {
                            gg.erase(nums[left]);
                        }
                        left++;  
                       
                    }
                    
                count+=right-left+1;
            }
         
          return count;  
        
                
        }  
    
};