class Solution {
public:
   
    
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==1)
        {
            if(nums[0]==target)
                return {0,0};
        }
        
        int low=0,high=nums.size()-1;
        
        while(low<=high)
        {
            int mid=(low+(high-low)/2);
            
            if(nums[mid]==target)
            {  int i=mid,j=mid;
                while((i>=0&&j<nums.size())&&(nums[i]==target||nums[j]==target))
                {
                    if(nums[i]==target&&nums[j]!=target)
                        i--;
                    else  if(nums[j]==target&&nums[i]!=target)
                        j++;
                    else  if(nums[j]==target&&nums[i]==target)
                    {
                        j++;
                        i--;
                    }
                    else
                        break;
                }
             if(j!=nums.size()&&nums[j]==target)
                 return{i+1,j};
             return {i+1,j-1};
            }
            
            else if(nums[mid]>target)
                high=mid-1;
            else
                low=mid+1;
        }
            
        
        
        return{-1,-1};
    }
};