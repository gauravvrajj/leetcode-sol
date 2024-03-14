class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        unordered_map<int,int>gg;
        
        int sum=0,count=0;
        for(auto i:nums)
        {
            sum+=i;
            if(sum==goal)
                count++;
            if(gg.count(sum-goal))
                count+=gg[sum-goal];
            gg[sum]++;
        }
        return count;
    }
};