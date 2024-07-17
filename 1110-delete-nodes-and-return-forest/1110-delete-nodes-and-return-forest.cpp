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
    vector<TreeNode*> ans;
    unordered_set<TreeNode*> ff;
    TreeNode* helper(TreeNode* root,  unordered_set<int>& gg){
        
        if(!root)
            return NULL;
        
        root->left = helper(root->left,gg);
        root->right = helper(root->right,gg);
        
        if(gg.count(root->val))
        {   
            if(root->left)
                ans.push_back(root->left);
            if(root->right)
                ans.push_back(root->right);
            delete root;
            return NULL;
        }
        
        return root;
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        
        unordered_set<int> gg;
        for(auto i:to_delete)
        {
            gg.insert(i);
        }
        root = helper(root,gg);
        if(root)
        {
            ans.push_back(root);
        }
        return ans;
    }
};
