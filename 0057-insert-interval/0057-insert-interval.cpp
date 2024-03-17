class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& ne) {
        if(in.size()==0)
            return {ne};
        bool k=1;
        for(int i=0;i<in.size();i++)
        {
            if((in[i][1]>=ne[0]&&in[i][1]<=ne[1]))
            {
                in[i][0]=min(ne[0],in[i][0]);
                in[i][1]=max(ne[1],in[i][1]);
                k=0;
                break;
            }
        }
        if(k)
            in.push_back(ne);
        
        sort(in.begin(),in.end());
        vector<vector<int>> ans;
        vector<int>x{in[0][0],in[0][1]};
        bool b=0;
        for(int i=0;i<in.size();i++)
        { 
           if(in[i][0]<=x[1]||in[i][0]<=x[0])
            {
                x[0]=min(x[0],in[i][0]);
                x[1]=max(x[1],in[i][1]);
            }
            else
            {
                ans.push_back(x);
                x[0]=in[i][0];
                x[1]=in[i][1];
            }
        }
     
            ans.push_back({x[0],x[1]});
        
        
        return ans;
    }
};