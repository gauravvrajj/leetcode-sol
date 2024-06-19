class Solution {
public:
    
    bool fun(vector<int>b,int m,int k,int mid)
    {
        for(int i=0;i<b.size();)
        {
            if(b[i]<=mid)
            {  int l=k;
                while(i<b.size()&&l&&b[i]<=mid)
                {
                    i++; 
                    l--;
                }
             if(l==0)
                 m--;
            }
            else 
                i++;
        }
        
        return m<=0?1:0;
       
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=INT_MAX;
        while(low<=high)
        {
           int mid=low+(high-low)/2;
            if(fun(bloomDay,m,k,mid)){
                ans=min(ans,mid);
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
            
        }
        
        return ans==INT_MAX?-1:ans;
        
    }
};