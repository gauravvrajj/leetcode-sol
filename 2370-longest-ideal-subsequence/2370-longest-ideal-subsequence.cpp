// class Solution {
// public:
    
//     int abc(string& s,int k,int i,int prev,vector<vector<int>>&dp)
//     {
//         if(i==s.size())
//         {
//             return 0;
//         }
//         if(dp[i][prev+1]!=-1)
//             return dp[i][prev+1];
//         int a=0;
//         if(prev==-1||abs(s[prev]-s[i])<=k)
//            a= 1+abc(s,k,i+1,i,dp);
//         return dp[i][prev+1]= max({abc(s,k,i+1,prev,dp),a});
//     }
//     int longestIdealString(string s, int k) {
//         vector<vector<int>>dp(s.size(),vector<int>(s.size(),-1));
//         return abc(s,k,0,-1,dp);   
//     }
// };

class Solution {
public:
    int longestIdealString(string s, int k) {
        int N = size(s);
        vector<int> dp(26, 0);

        int res = 0;
        // Updating dp with the i-th character
        for (int i = 0; i < N; i++) {
            int curr = s[i] - 'a';
            int best = 0;
            for (int prev = 0; prev < 26; prev++) {
                if (abs(prev - curr) <= k) {
                    best = max(best, dp[prev]);
                }
            }

            // Appending s[i] to the previous longest ideal subsequence allowed
            dp[curr] = max(dp[curr], best + 1);
            res = max(res, dp[curr]);
        }
        return res;
    }
};