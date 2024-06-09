class Solution {
public:
    
    
    int subarraysDivByK(vector<int>& nums, int k) {
        int co=0,b=0;
        unordered_map<int,int>x;
        x[0]=1;
        for(int i=0;i<nums.size();i++)
        {   
            co+=nums[i];
            int rem=co%k;
            // cout<<rem<<" ";
            if(rem<0)
                rem+=k;
            if(x.find(rem)==x.end())
                x[rem]++;
            else
            {
                b=b+x[rem];
                x[rem]++;
            }
        }
        
        return b;
        
    }
};