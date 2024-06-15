typedef pair<int,int>pii;
class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
      
        vector<pii>gg;
        int ans=0;
        for(int i=0;i<profits.size();i++)
        {
            gg.push_back({capital[i],profits[i]});
        }
        sort(gg.begin(),gg.end());
        
        priority_queue<int>x;
        int j=0;
        for(int i=k;i>0;i--)
        {
            
            while(j<gg.size()&&w>=gg[j].first)
            {
                x.push(gg[j].second);
                j++;
            }
             if(x.size()){
                 
              w+= x.top();
                 x.pop();
                 
                 }
        
        
         }
        return w;
    }
};