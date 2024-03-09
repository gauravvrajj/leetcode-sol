class Solution {
public:
    
    bool rec(int i,int j,string& s,string& p)
    {
        if(i>=s.size()&&j>=p.size())
            return 1;
        if(j>=p.size())
            return 0;
         int b=2;
         if(i<s.size())
         b=((s[i]==p[j])||(p[j]=='.'));
        
        if(j<p.size()-1&&p[j+1]=='*')
        {   
            if(b!=1)
            return rec(i,j+2,s,p);
            else if(i<s.size())
            return ((rec(i+1,j,s,p))||rec(i,j+2,s,p));
        }
        else if(b==1)
        return rec(i+1,j+1,s,p);
        
        if(i>=s.size())
            return 0;

        return b; 
    }
    
    
    bool isMatch(string s, string p) {
       return rec(0,0,s,p);
          
    }
};