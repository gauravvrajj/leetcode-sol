class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        
        vector<long>gg;
        for(int i=0;i<nums.size();i++)
        {  int sum=0;
            for(int j=i;j<nums.size();j++)
            {
              sum+=nums[j];
                gg.push_back(sum);
            }
        }
        sort(gg.begin(),gg.end());
        long ans=0;
        for(int i=left-1;i<right;i++)
        {
            ans+=gg[i];
        }
        
        int a=(ans%1000000007);
        return a;
    }
};