class Solution {
public:
    vector<int>ans;
    void gg(vector<int>&nums,int curr,int i,vector<int>&a,vector<int>&dp)
    {
        if(i==nums.size())
        {  if(a.size()>ans.size())
            ans=a;
            return;
        }
        
            if((int)a.size()>dp[i]&&nums[i]%curr==0)
            {   dp[i]=a.size();
                a.push_back(nums[i]);
                gg(nums,nums[i],i+1,a,dp);
                a.pop_back();
            }
    
            gg(nums,curr,i+1,a,dp);

    }
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<int>a;
        vector<int>dp(nums.size(),-1);
        gg(nums,1,0,a,dp);
        return ans;
        
    }
};