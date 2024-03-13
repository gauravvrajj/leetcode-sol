class Solution {
public:
    int pivotInteger(int n) {
        
        int sum=(n*(n+1))/2;
        
        for(int i=1;i<=n;i++)
        {
            float sum2=sum+i;
            int sum3= (i*(i+1))/2;
            if(sum2/2==sum3)
                return i;
        }
        return -1;
    }
};