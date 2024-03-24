class Solution {
public:
    int maximumLengthSubstring(string s) {
        
        
        int count=0,maxx=0;
        for(int i=0;i<s.size();i++)
        {  vector<int>c(26,0);
            for(int j=i;j<s.size();j++)
            {
                 c[s[j]-'a']++;
                if(c[s[j]-'a']>2)
                    break;
                maxx=max(maxx,j-i+1);
            }    
        }
        
        return maxx;
        
    }
};