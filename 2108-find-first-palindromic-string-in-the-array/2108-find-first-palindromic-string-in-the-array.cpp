class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(auto i:words)
        {  int left=0,right=i.size()-1;
            bool b=0;
           while(left<=right)
           {
               if(i[left]!=i[right])
               {
                   b=1;
                   break;
               }
               left++;
               right--;
               
           }
         if(b==0)
             return i;
        }
        
        return "";
        
    }
};