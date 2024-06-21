class Solution {
public:
    int maxSatisfied(vector<int>& customer, vector<int>& grumpy, int m) {
        int sum=0;
        for(int i=0;i<customer.size();i++)
        {
            if(grumpy[i]==0)
                sum+=customer[i];
        }
        int i=0,j=0,ans=sum;
          while(j<customer.size()&&j<m)
            {
                if(grumpy[j]==1)
                {
                    sum+=customer[j];
                }
                j++;
            }
        ans=max(sum,ans);
        while(j<customer.size())
        {
            if(grumpy[i]==1)
                sum-=customer[i];
            i++;
            
            if(grumpy[j]==1)
                sum+=customer[j];
            j++;
            
            ans=max(sum,ans);
          
        }
        
       return ans; 
        
    }
};