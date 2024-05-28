class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int count=0,maxx=0,x=maxCost,j=0;
        for(int i=0;i<s.size();){
            
            if(maxCost>=0&&abs(s[i]-t[i])<=maxCost)
            {
               count++;
               maxCost-=abs(s[i]-t[i]);
               maxx=max(count,maxx);
                i++;
            }
            else{
                
                if(abs(s[i]-t[i])>x)
            {
                maxCost=x;
                count=0;
                i++;
                j=i;
            }
                else
                    while(j<i&&maxCost<abs(s[i]-t[i])){
                        maxCost+=abs(s[j]-t[j]);
                        count--;
                        j++;
                    }
            }
            // cout<<count<<" "<<maxCost<<" "<<i<<endl;
        }
        return maxx;
    }
};