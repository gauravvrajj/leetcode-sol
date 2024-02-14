class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int pos=0,neg=1;
        for(auto i:nums)
        {
            if(i<0)
            {
                ans[neg]=i;
                neg+=2;
            }
            else
            {
                ans[pos]=i;
                pos+=2;
            }
        }
       
        return ans;        
    }
};