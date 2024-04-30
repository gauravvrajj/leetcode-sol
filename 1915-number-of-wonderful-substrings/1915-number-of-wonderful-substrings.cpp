class Solution {
public:
    long long wonderfulSubstrings(string word) {
        
        unordered_map<long,long>gg;
        gg[0]=1;
        long c_xor=0,res=0;
        for(int i=0;i<word.size();i++)
        {
           int shift=word[i]-'a';
            c_xor ^= (1 << shift);
            
            res+=gg[c_xor];
            
            for(int j=0;j<10;j++)
            
                res += gg[c_xor ^ (1 << j)];
            
            
            gg[c_xor]++;
        }
        
        return res;
        
    }
};