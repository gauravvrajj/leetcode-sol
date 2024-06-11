class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        map<int,int>gg;
        for(auto i:arr1)
            gg[i]++;
        vector<int>ans;
        for(int i=0;i<arr2.size();i++)
        {
            if(gg.count(arr2[i]))
            {
                int j=gg[arr2[i]];
                while(j)
                {
                    ans.push_back(arr2[i]);
                    j--;
                }
            }
            gg.erase(arr2[i]);
        }
        
        for(auto i:gg)
        {
            for(auto j=i.second;j>0;j--)
            {
               ans.push_back(i.first);
            }
        }
        return ans;
    }
};