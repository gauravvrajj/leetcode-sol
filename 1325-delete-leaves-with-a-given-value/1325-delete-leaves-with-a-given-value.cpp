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
    
    void dfs(   TreeNode*root,int target)
    {
      if(root==NULL)return;
        
        dfs(root->right,target);
        if(root->right&&root->right->val==-1)
        {
            root->right=nullptr;
        }
        dfs(root->left,target);
        if(root->left&&root->left->val==-1)
        {
            root->left=nullptr;
        }
        if(root->right==NULL&&root->left==NULL&&root->val==target)
        {
            root->val=-1;
            return;
        }
    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        
        
       dfs(root,target);
        if(root->val==-1)return NULL;
        return root;
        
    }
};