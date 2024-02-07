class Solution {
public:
    
    struct myComp {
    constexpr bool operator()(
        pair<int, int> const& a,
        pair<int, int> const& b)
        const noexcept
    {
        return a.second < b.second;
    }
};

    string frequencySort(string s) {
        
        unordered_map<int,int>gg;
        for(auto i:s)
            gg[i]++;
        priority_queue<pair<char,int>, vector<pair<char,int>>, myComp>ans;
        for(auto i:gg)
            ans.push(make_pair(i.first,i.second));
        string a="";
        while(ans.size())
        {
            pair<char,int>x=ans.top();
            for(int i=0;i<x.second;i++)
                a+=x.first;
            ans.pop();
                
        }
        return a;
        
        
    }
};