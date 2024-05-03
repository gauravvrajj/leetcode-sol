class Solution {
public:
    int compareVersion(string version1, string version2) {
        
        int n=max(version1.size(),version2.size());
        int i=0,j=0;
        while(i<n||j<n)
        {
           string k="";
           while(i<version1.size()&&version1[i]!='.')
           {
               k+=version1[i];
               i++;
           }
            i++;
           string l="";
           while(j<version2.size()&&version2[j]!='.')
           {
               l+=version2[j];
               j++;
           }
            j++;
            // cout<<l<<" "<<k<<" ";
           if(k!=""&&l!=""&&stoi(k)>stoi(l))return 1;
            else if(k!=""&&l!=""&&stoi(l)>stoi(k))return -1;
            else if(k==""||l=="")
            {
                if(l!=""&&k=="")
                {
                    if(i==n-1&&0==stoi(l))return 0;
                    else if(0<stoi(l)) return -1;
                }
                if(k!=""&&l=="")
                    if(l=="")
                {
                    if(j==n-1&&0==stoi(k))return 0;
                    else if(0<stoi(k)) return 1;
                }
            }
            
        }
        
        return 0;
        
    }
};