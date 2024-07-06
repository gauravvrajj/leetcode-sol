class Solution {
public:
    int passThePillow(int n, int time) {
        int i=1;
        while(time>0)
        {
            i++;
            time--;
            if(i==n)
            {
                while(i>1&&time)
                {
                  i--;
                  time--;
                } 
                continue;
            }
            
        }
        return i;
    }
};