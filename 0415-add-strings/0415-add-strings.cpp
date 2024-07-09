class Solution {
public:
    string addStrings(string num1, string num2) {
        
       int i=num1.size()-1,j=num2.size()-1,rem=0;
        string ans="";
        while(i>=0&&j>=0)
        {
           int k=num1[i]-'0'+num2[j]-'0'+rem;
            if(k>=10)rem=1;
            else
                rem=0;
            ans+= (k%10)+'0';
            
            i--;
            j--;
        }
        while(j>=0)
        {
           int k=num2[j]-'0'+rem;
            if(k>=10)rem=1;
            else rem=0;
            ans+=(k%10)+'0';
            j--;
        }
        while(i>=0)
        {
            int k=num1[i]-'0'+rem;
            if(k>=10)rem=1;
            else rem=0;
            ans+=(k%10)+'0';
            i--;
        }
        if(rem==1)ans+='1';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};