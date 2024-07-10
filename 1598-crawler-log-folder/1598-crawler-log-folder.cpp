class Solution {
public:
    int minOperations(vector<string>& logs) {
        int j=0;
        for(auto i:logs)
        {
            if(i=="../")
            {
                if(j==0)continue;
                j--;
            }
            else if(i=="./")
                continue;
            else
                j++;
        }
        return j;
    }
};