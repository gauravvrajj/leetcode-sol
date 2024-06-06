class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        
       map<int,int>gg;
        for(auto i:hand)
        {
            gg[i]++;
        }
        
        while(gg.size())
        {
            int count=1;
            auto i=gg.begin();
            // cout<<(i->first);
            int x=i->first;
            gg[i->first]--;
            if(gg[i->first]==0)
                {
                    gg.erase(i);
                    i=gg.begin();
                }
            else
            i++;
            while(gg.size()&&count<groupSize&&i!=gg.end())
            {
                if(x+1==i->first){
                count++;
                x++;
                }
                else
                    return false;
                gg[i->first]--;
                if(gg[i->first]==0)
                {
                    gg.erase(i);
                    i=gg.begin();
                }
                else
                i++; 
            }
            
            if(count<groupSize)
                return false;
                
        }
        return true;
    }
};