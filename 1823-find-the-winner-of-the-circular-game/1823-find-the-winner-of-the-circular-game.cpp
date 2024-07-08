class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>gg;
        for(int i=1;i<=n;i++)
            gg.push_back(i);
        int count=1;
        for(int i=0;i<gg.size();)
        {
            if(count==k)
            {
                int j=i;
                if(i==gg.size()-1&&gg.size()>1){
                i=0;
                }
                gg.erase(gg.begin()+j);
                count=1;
                continue;
            }
            
            if(i==gg.size()-1&&gg.size()>1){
                i=-1;
            }
            i++;
            count++;
        }
        return gg[0];
    }
};