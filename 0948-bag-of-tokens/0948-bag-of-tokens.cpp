class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int i=0,j=tokens.size()-1,count=0,ans=INT_MIN;
        ans=max(ans,count);
        while(i<=j)
        {   
            if(power-tokens[i]>=0)
            {   power-=tokens[i];
                i++;
                count+=1;
            }
            else
            {  if(count!=0){
                power+=tokens[j];
                j--;
                count-=1;
            }
             else{
                 ans=max(ans,count);
                 break;
             }
            }
         ans=max(ans,count);
        }
        
        return ans;
        
    }
};