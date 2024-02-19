class Solution {
public:
    bool isPowerOfTwo(int x) {
        
       if(x<0) return false;
    
    return x && (!(x & (x - 1)));
    }
};