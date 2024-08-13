class Solution {
public:
    set<vector<int>>ans;
    void sum(int i, vector<int>& candidates, int target, vector<int>&arr)
    {
        if(target==0)
            ans.insert(arr);
        
        for(int l=i;target>0&&l<candidates.size();l++)
        {
             if(i!=l && (candidates[l] == candidates[l-1])){
                continue;
            }
            arr.push_back(candidates[l]);
            sum(l+1,candidates, target-candidates[l], arr);
            arr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>arr;
        vector<vector<int>>gg;
        sum(0,candidates,target,arr);
        for(auto i:ans)
            gg.push_back(i);
            
        return gg;
        
    }
};