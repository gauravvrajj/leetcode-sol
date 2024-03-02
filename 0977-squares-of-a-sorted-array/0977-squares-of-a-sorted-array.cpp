class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       
        int l=0,r=nums.size()-1;
        vector<int>res;
        while(l<=r)
        {
            int left=nums[l]*nums[l],right=nums[r]*nums[r];
            if(left>=right)
            {
                res.push_back(left);
                l++;
            }
            else{
                res.push_back(right);
                r--;
            }
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};