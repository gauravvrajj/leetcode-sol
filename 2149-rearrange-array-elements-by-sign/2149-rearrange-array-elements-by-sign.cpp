class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>neg;
        vector<int>pos;
        for(auto i:nums)
        {
            if(i<0)
                neg.push_back(i);
            else
                pos.push_back(i);
        }
        int j=0;
        for(int i=0;i<nums.size();i+=2)
        {
            nums[i]=pos[j];
            nums[i+1]=neg[j];
            j++;
        }
        return nums;        
    }
};