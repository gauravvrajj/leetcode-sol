class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        unordered_map<double,vector<int>>gg;
        vector<double>pp;
        for(int i=0;i<arr.size();i++)
            for(int j=i+1;j<arr.size();j++)
            {
                double p=(double)arr[i]/(double)arr[j];
                gg[p]={arr[i],arr[j]};
                pp.push_back(p);
            }
        sort(pp.begin(),pp.end());
        // for(auto i:pp)
        //     cout<<i<<" ";
        return gg[pp[k-1]];
        
    }
};