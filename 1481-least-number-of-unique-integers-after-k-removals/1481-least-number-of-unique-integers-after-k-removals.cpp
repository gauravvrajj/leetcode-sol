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
        
        unordered_map<int,int>mapp;
        for(auto i:arr)
        {
            mapp[i]++;
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,myComp>queuee;
        
        for(auto i:mapp)
        {
         queuee.push({i.first,i.second});
        }
        
        while(queuee.size())
        {
           pair<int,int>pairr=queuee.top();
            k=k-pairr.second;
            if(k<0)
                return queuee.size();
            
            else
                queuee.pop();   
        }
        return 0;
        
    }
};