class Solution {
public:
    int minimumLength(string s) {
      
        int left=0,right=s.size()-1;
        while(left<right)
        {
            if(s[left]==s[right])
            {   
                char a=s[left];
                while(left<right&&s[left]==a)
                {
                    left++;
                }
                while(left-1<right&&s[right]==a)
                {
                    right--;
                }
                if((right-left==1&&s[right]==s[left])||left>right)
                return 0;
            }
            else
                break;
        }
        if(s[left]==s[right])
            return 1;
        string g=s.substr(left,right-left+1);
       return g.size();
    }
};