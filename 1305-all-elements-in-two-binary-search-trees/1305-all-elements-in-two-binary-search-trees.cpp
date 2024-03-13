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
    vector<int>a;
    void abc(TreeNode* root)
    {
        if(root==NULL)
            return;
        
        abc(root->left);
        a.push_back(root->val);
        abc(root->right);
        
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        abc(root1);
        abc(root2);
        sort(a.begin(),a.end());
        
       return a; 
    }
};