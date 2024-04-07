class Solution {
public: 
    bool checkValidString(string s) {
        stack<int> openBrackets; // Stack to store indices of open brackets
        stack<int> asterisks; // Stack to store indices of asterisks

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            // If current character is an open bracket, push its index onto the stack
            if (ch == '(') {
                openBrackets.push(i);
                // If current character is an asterisk, push its index onto the stack
            } else if (ch == '*') {
                asterisks.push(i);
                // current character is a closing bracket ')'
            } else {
                // If there are open brackets available, use them to balance the closing bracket
                if (!openBrackets.empty()) {
                    openBrackets.pop();
                    // If no open brackets are available, use an asterisk to balance the closing bracket
                } else if (!asterisks.empty()) {
                    asterisks.pop();
                    // Unmatched ')' and no '*' to balance it.
                } else {
                    return false;
                }
            }
        }

        // Check if there are remaining open brackets and asterisks that can balance them
        while (!openBrackets.empty() && !asterisks.empty()) {
            // If an open bracket appears after an asterisk, it cannot be balanced, return false
            if (openBrackets.top() > asterisks.top()) {
                return false; // '*' before '(' which cannot be balanced.
            }
            openBrackets.pop();
            asterisks.pop();
        }

        // If all open brackets are matched and there are no unmatched open brackets left, return true
        return openBrackets.empty();
    }
};



// class Solution {
// public:
    
//     bool dfs(int i,string& s, stack<char>gg)
//     {
//         if(i==s.size())
//         {
//           return !gg.size();
//         }
        
//         else if(s[i]=='*')
//         {  gg.push('(');
//             bool a=dfs(i+1,s,gg);
//            gg.pop();
//             bool b=0;
//             char d='A';
//          stack<char>pp=gg;
//            if(gg.size())
//            {  
//                pp.pop();
//                b=dfs(i+1,s,pp);
//            }
//          bool c=dfs(i+1,s,gg);
         
//          return a||b||c;
            
//         }
//         else if(s[i]==')')
//         {
//             if(gg.size()==0)
//                 return 0;
//             else
//             {
//               gg.pop();  
//               return dfs(i+1,s,gg);
//             }
//         }
//         else
//         {
//             gg.push('(');
//             return dfs(i+1,s,gg);
//         }
//     }
//     bool checkValidString(string s) {
//         stack<char>gg;
//         return dfs(0,s,gg);
        
//     }
// };