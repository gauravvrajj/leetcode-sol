class Solution {
public:
    int xo=0;
    void back(vector<int>&nums,int l,int sum)
    {
        xo+=sum;
    
        for(int i=l;i<nums.size();i++)
        {
            sum^=nums[i];
            back(nums,i+1,sum);
            sum^=nums[i];
        }
        
    }
    int subsetXORSum(vector<int>& nums) {
        back(nums,0,0);
        return xo;
    }
};