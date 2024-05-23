class Solution {
public:
    vector<vector<int>>ans;
    void dfs(vector<int>&nums,int k,int l,vector<int>&x){
        if(x.size()>0)
        ans.push_back(x);
        for(int i=l;i<nums.size();i++)
        {
            if(x.size()>0)
            {bool b=0;
               for(auto j:x)
               {
                   if(abs(j-nums[i])==k)
                   {   b=1;
                       break;
                   }
               }
             if(b)
                continue;
            }
            x.push_back(nums[i]);
                dfs(nums,k,i+1,x);
            x.pop_back();
            
        }
    }
    
    int beautifulSubsets(vector<int>& nums, int k) {
        vector<int>x;
        dfs(nums,k,0,x);
        // for(auto i:ans){
        //     for(auto j:i)
        //     {
        //       cout<<j<<" ";  
        //     }
        //     cout<<endl;
        // }
        return ans.size();
        
        
    }
};