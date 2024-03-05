class Solution {
public:
     int memo[200][200] = {};
    int minSpaceWastedKResizing(vector<int> &nums, int k) {
        memset(memo, -1, sizeof(memo));
              return dfs(nums,k,0); 
    }

    int dfs(vector<int>&nums,int k,int j)
    {   if(j==nums.size())
        return 0;
        if(k==-1)
        return 200 * 1e6;;
     if (memo[j][k] != -1) return memo[j][k];
        int ans=INT_MAX,maxx=INT_MIN,tot=0;
        for(int i=j;i<nums.size();i++)
        {  
           maxx=max(nums[i],maxx);
           tot += nums[i];
           int wasted = maxx* (i - j + 1) - tot;
           ans=min(ans,wasted+dfs(nums,k-1,i+1));
        }
        return memo[j][k]= ans;
    }

};