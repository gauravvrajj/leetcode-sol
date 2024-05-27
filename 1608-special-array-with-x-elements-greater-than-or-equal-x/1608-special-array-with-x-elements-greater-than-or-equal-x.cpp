class Solution {
public:
    int specialArray(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==0)
                continue;
                else
                {  int k= i==0?1:nums[i-1]+1;
                    for(int j=k;j<=nums[i];j++)
                    {
                      if(j==nums.size()-i)return j;  
                    }
                }
            }
        return -1;
        
        
    }
};