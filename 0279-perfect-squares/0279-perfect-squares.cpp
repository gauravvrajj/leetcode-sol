class Solution {
public:
    
    int helper(vector<int>& gg,int i,int k,vector<int>& ggg)
    {
        if(i>=gg.size()||k<0)
            return INT_MAX-1;
        if(k==0)
            return 0;
        if(ggg[k]!=-1)
        return ggg[k];
        
        return ggg[k]=min(1+helper(gg,i,k-gg[i],ggg),min(1+helper(gg,i+1,k-gg[i],ggg),helper(gg,i+1,k,ggg)));
    }
    int numSquares(int k) {
        
        vector<int>gg;
        vector<int>ggg (10001,-1);
        for(int i=1;i*i<=k;i++)
        {
          gg.push_back(i*i);  
        }
         
        return helper(gg,0,k,ggg);
    }
};