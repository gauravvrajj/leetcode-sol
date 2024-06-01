class Solution {
public:
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
        
         sort(nums1.begin(),nums1.end());
         sort(nums2.begin(),nums2.end());
         vector<int>gg{nums2[0]-nums1[0],nums2[0]-nums1[1],nums2[0]-nums1[2]};
         int ans=INT_MAX;
        for(auto i:gg)
        {   int k=0,d=0;
            for(int j=0;j<nums1.size()&&k<nums2.size();j++)
            {
                if(nums2[k]-nums1[j]!=i)
                    d++;
                else
                    k++;
                if(d>2)break;
            }
         if(k==nums2.size())ans=min(i,ans);
        }
        return ans;
        
    }
};