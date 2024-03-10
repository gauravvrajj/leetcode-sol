class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int>gg;
        for(auto i:nums1)
            gg.insert(i);
        unordered_set<int>pp;
        for(auto i:nums2)
        {
            if(gg.find(i)!=gg.end())
                pp.insert(i);
        }
        vector<int>ans(pp.begin(),pp.end());
        return ans;
    }
};