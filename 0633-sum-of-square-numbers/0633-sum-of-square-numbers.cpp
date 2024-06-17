class Solution {
public:
    bool judgeSquareSum(int c) {
        
        long b=sqrt(c),a=0;
        while(a<=b)
        {
            if(b*b+a*a==c)return 1;
            else if(b*b+a*a>c)
            {
                b--;
            }
            else
                a++;
        }
      return 0;  
    }
};