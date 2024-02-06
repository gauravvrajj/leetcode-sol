class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int curr=INT_MAX,ans=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            curr=min(arr[i],curr);
            ans=max(arr[i]-curr,ans);
        }
        return ans;
        
        
    }
};