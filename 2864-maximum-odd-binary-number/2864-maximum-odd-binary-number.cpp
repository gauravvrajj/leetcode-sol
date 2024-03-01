class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count_1=0;
        for(auto i :s)
            if(i=='1')
                count_1++;
        string ans="";
        for(int i=0;i<s.size()-1;i++)
        {
            if(count_1>1)
            {
                ans+='1';
                count_1--;
            }
            else
            {
                ans+='0';
            }
        }
        ans+='1';
        return ans;
        
    }
};