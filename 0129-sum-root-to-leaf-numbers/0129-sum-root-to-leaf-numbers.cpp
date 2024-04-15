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
public: int sum=0;
    
    void dp(TreeNode* root,string a)
    {
        if(root==NULL)return;
        if(root&&(root->left==NULL&&root->right==NULL))
        {
          a+=to_string(root->val);
         sum+=stoi(a);
            return;
        }
        
        dp(root->left, a+to_string(root->val));
        dp(root->right, a+to_string(root->val));
        
    }
    int sumNumbers(TreeNode* root) {
        if(root==NULL)
            return 0;
        string a="";
       dp (root,a);
        return sum;
    }
};