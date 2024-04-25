class Solution {
public:
    int longestIdealString(string s, int k) {
        
        vector<int>gg(26,0);
        for(int i=0;i<s.size();i++)
        {
            int n=s[i]-'a'+k;
            int c=s[i]-'a'-k;
            if(c<0)
                c=0;
            if(n>=26)
                n=25;
            for(int j=c;j<=n;j++)
            {
               gg[s[i]-'a']=max(gg[j],gg[s[i]-'a']);
            }
            gg[s[i]-'a']++;
        }
        
        // for(auto i:gg)
        //     cout<<i<<" ";
        
        return *max_element(gg.begin(),gg.end());
        
    }
};