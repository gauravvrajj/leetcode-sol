class Solution {
public:
    int passThePillow(int n, int time) {
        int i=1;
        while(time)
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
            }
            
        }
        return i;
    }
};