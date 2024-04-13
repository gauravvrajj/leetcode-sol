class Solution {
public:
    
    int mah(vector<int>&gg)
    {
        int maxx=INT_MIN,minn=INT_MAX,count=0,ar=0;
        for(int i=0;i<gg.size();i++)
        {   maxx=max(maxx,gg[i]);
            minn=gg[i];
            count=1;
            for(int j=i+1;j<gg.size();j++)
            {
                if(gg[j]==0)
                    break;
                else
                {
                    count++;
                    minn=min(gg[j],minn);
                    ar=minn*count;
                    maxx=max(maxx,ar);
                    // cout<<maxx;
                }
                
            }
        }
        // cout<<endl;
        return maxx;
    }
    
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        int maxx=INT_MIN;
        vector<int>gg(matrix[0].size(),0);
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]=='0')
                {   gg[j]=0;
                    continue;
                }
                else{
                    gg[j]+=matrix[i][j]-'0';
                }
            }
            // for(auto i:gg)
            //     cout<<i;
            // cout<<endl;
            maxx=max(maxx,mah(gg));
        }
        
        return maxx;
        
        
    }
};