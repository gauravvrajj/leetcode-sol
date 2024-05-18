/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int count=0;
     int dfs(TreeNode* root)
     {
         if(!root)return 0;
         int le=dfs(root->left);
         int re=dfs(root->right);
         int recount=root->val-1+le+re;
         count+=abs(recount);
         return recount;
         
     }
    
    
    int distributeCoins(TreeNode* root) {
        
        
         dfs(root);
        return count;
    }
};