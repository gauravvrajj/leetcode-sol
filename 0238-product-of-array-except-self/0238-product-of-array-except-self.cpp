class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size()-1;
        vector<int>x;
        vector<int>y(n+1);
        int xa=1,ya=1;
        
        for(int i=0;i<nums.size();i++)
        {
            xa*=nums[i];
            ya*=nums[n-i];
            x.push_back(xa);
            y[n-i]=ya;
        }
        // cout<<1;
        vector<int>ans;
        
        for(int i=0;i<=n;i++)
        {
            if(i-1>=0&&i+1<=n)
            {
               ans.push_back(y[i+1]*x[i-1]); 
            }
            else if(i-1<0)
            {
                ans.push_back(y[i+1]);
            }
            else if(i+1>n)
            {
                ans.push_back(x[i-1]);
            }
        }
        
        return ans;
        
    }
};