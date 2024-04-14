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
    int sum=0;
    void d(TreeNode* root)
    {
       if(root==NULL)
           return ;
       if(root->left&&(root->left->left==NULL&&root->left->right==NULL))
       {
          sum+=root->left->val; 
       }
 
        d(root->left);
        d(root->right);
        
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        
        if(!root||(!root->right&&!root->left))
            return 0;
        d(root);
        return sum;
    }
};