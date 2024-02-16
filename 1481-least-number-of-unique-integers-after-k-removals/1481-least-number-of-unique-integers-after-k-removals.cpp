class Solution {
public:
    struct myComp {
    constexpr bool operator()(
        pair<int, int> const& a,
        pair<int, int> const& b)
        const noexcept
    {
        return a.second > b.second;
    }
};
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        
        unordered_map<int,int>gg;
        for(auto i:arr)
        {
            gg[i]++;
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,myComp>aa;
        
        for(auto i:gg)
        {
         aa.push({i.first,i.second});
        }
        
        while(aa.size())
        {
           pair<int,int>x=aa.top();
            k=k-x.second;
            if(k<0)
            {
                return aa.size();
            }
            else
            {
                aa.pop();
                
            }
            
        }
        return 0;
        
    }
};