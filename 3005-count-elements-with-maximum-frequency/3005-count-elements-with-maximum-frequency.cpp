class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int count=0;
        unordered_map<int,int>gg;
        for(auto i:nums)
        {
            gg[i]++;
            count=max(count,gg[i]);
        }
        int ans=0;
        for(auto i:gg)
        {
            if(i.second==count)
            ans+=i.second;
        }
        return ans;
    }
};