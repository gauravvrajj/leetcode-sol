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
    pair<int,int> ans{INT_MIN,INT_MIN};
    void height(TreeNode*root,int h)
    {
       if(root==NULL)
           return;
        if(root->left==NULL&&root->right==NULL&&ans.first<h)
        {  
           ans.first=h;
           ans.second=root->val;
        }
        height(root->left,h+1);
        height(root->right,h+1);       
    }
    
    
    int findBottomLeftValue(TreeNode* root) {
       char c;
       height(root,0); 
        return ans.second;
    }
};