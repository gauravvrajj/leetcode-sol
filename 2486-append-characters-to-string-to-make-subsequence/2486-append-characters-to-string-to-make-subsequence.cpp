class Solution {
public:
    int appendCharacters(string s, string t) {
        
        int j=0,k=0;
        
        while(j<s.size()&&k<t.size())
        {
            if(s[j]==t[k])
                k++;
            j++;
        }
        
        return t.size()-k; 
        
    }
};