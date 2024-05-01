class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        for(int i=0;i<word.size();i++)
        {
            if(word[i]==ch)
            {
                int left=0,right=i;
                while(left<=right)
                {
                    char g=word[left];
                    word[left]=word[right];
                    word[right]=g;
                    left++;
                    right--;
                }
            break;
            }
        }
        
        return word;
        
    }
};