class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        
        unordered_map<int,int>gg;
        gg[0]=1;
        int sum=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(gg.count(sum-k))
            {
                count+=gg[sum-k];
            }
            gg[sum]++;
        }
        return count;
    }
};