class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        
        long long ans=0;
        sort(happiness.begin(),happiness.end(),greater<int>());
        
        int count=0,i=0;
        while(k>0&&i<happiness.size())
        {
           ans+=(happiness[i]-count)>=0?happiness[i]-count:0;
            count++;
            i++;
            k--;
        }
        return ans;
        
    }
};