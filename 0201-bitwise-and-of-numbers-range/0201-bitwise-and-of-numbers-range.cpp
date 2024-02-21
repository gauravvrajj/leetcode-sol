class Solution {
public:
    int rangeBitwiseAnd(int a, int b) {
       int shiftcount = 0;
    //Iterate through every bit of a and b simultaneously
      //If a == b then we know that beyond that the and value will remain constant
      while(a != b and a > 0) {
          shiftcount++;
          a = a >> 1; 
          b = b >> 1;
    }
      return int64_t(a << shiftcount);
        
    }
};