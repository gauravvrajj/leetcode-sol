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
    void height(TreeNode*root,int h,char c)
    {
       if(root==NULL)
           return;
        if(root->left==NULL&&root->right==NULL&&ans.first<h)
        {  
           ans.first=h;
           ans.second=root->val;
        }
        height(root->left,h+1,'L');
        height(root->right,h+1,'R');       
    }
    
    
    int findBottomLeftValue(TreeNode* root) {
       char c;
       height(root,0,'L'); 
        return ans.second;
    }
};