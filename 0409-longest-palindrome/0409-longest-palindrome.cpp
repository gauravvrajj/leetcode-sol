class Solution {
public:
    int longestPalindrome(string s) {
        
        
        unordered_map<char,int>gg;
        for(auto i:s)
            gg[i]++;
        int count=0;
        for(auto i:gg)
            if(i.second%2!=0)
                count++;
        
        if(count==0)return s.size();
        
        return s.size()-count+1;
        
    }
};