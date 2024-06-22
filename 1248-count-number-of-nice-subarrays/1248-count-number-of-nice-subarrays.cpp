class Solution {
public:
    int fun(vector<int>& nums, int m){
        if(m<0)return 0;
        int ans=0,count=0,l=0,r=0;
        while(r<nums.size())
        {
            ans+=nums[r];
            while(ans>m)
            {
               ans-=nums[l] ;
                l++;
            }
            
            count+=r-l+1;
            r++;
            
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int m) {
      
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
              nums[i]=0;  
            else
                nums[i]=1;
        }
        
        return fun(nums,m)-fun(nums,m-1);
        
        
    }
};