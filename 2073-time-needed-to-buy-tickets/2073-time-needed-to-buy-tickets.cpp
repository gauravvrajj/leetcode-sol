class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        
        
        queue<pair<int,int>>gg;
        for(int i=0;i<tickets.size();i++)
         gg.push({tickets[i],i});
        pair<int,int> x=gg.front();
        int count=0;
        while(gg.size())
        {   
            gg.pop();
            count++;
            x.first--;
            if(x.first==0&&x.second==k)
                break;
            if(x.first==0)
            {
                x=gg.front();
                continue;
            }
            else gg.push(x);
            x=gg.front();
        }
        
        
      return count;  
    }
};