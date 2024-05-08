class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>dup=score;
        vector<string>ans;
        sort(dup.begin(),dup.end(),greater<int>());
        int j=1;
        unordered_map<int,int>gg;
        for(auto i:dup)
        {
            gg[i]=j;
            j++;
        }
        
        for(auto i:score)
        {
            if(gg[i]==1)ans.push_back("Gold Medal");
            else if(gg[i]==2)ans.push_back("Silver Medal");
             else if(gg[i]==3)ans.push_back("Bronze Medal");
            else ans.push_back(to_string(gg[i]));
        }
        
return ans;
    }
};