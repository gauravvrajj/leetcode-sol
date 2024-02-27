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
    int ans=0;
    int d(TreeNode*root)
    {
        if(root==NULL||(root->right==NULL&&root->left==NULL))
        return 0;
        int a=0,b=0;
        if(root->left!=NULL)
        a=1+d(root->left);
        if(root->right!=NULL)
        b=1+d(root->right);
        int c=max(a,b);
        ans=max(ans,a+b);
        return c;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        d(root);
        return ans;
        
    }
};