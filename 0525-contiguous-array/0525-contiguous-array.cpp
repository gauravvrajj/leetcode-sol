class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>gg;
        gg[0]=-1;
        int count=0;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                count+=-1;
            else
                count+=1;
            if(gg.count(count))
                ans=max(ans,i-gg[count]);
            else
                gg[count]=i;
        }
        return ans;
    }
};