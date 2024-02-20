class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        vector<int>visited(nums.size()+1,0);
        for(auto i:nums)
            visited[i]=1;
        int ans;
        for(int i=0;i<visited.size();i++)
            if(visited[i]==0)return i;
        
        return ans;
        
    }
};