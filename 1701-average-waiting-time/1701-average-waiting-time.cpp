class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        vector<int>gg;
        vector<int>ans;
        int j=-1;
        for(auto i:customers){
            if(j==-1){
            gg.push_back(i[0]+i[1]);
                ans.push_back(gg[0]-i[0]);
                j++;
            }
            else
            {
                gg.push_back(max(i[0],gg[j])+i[1]);
                
                ans.push_back(max(gg[j]+i[1],i[0]+i[1])-i[0]);
                j++;
            }
        }
        double avg=0;
        for(auto i:ans)
        {
            avg+=i;
        }
        
        
       return avg/ans.size(); 
    }
};