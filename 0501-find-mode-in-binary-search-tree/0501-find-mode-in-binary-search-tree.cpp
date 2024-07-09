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
    unordered_map<int,int>gg;
    void helper(TreeNode* root)
    {
       if(!root)return;
        
        helper(root->left);
        gg[root->val]++;
        helper(root->right);
        
    }
    vector<int> findMode(TreeNode* root) {
        
        helper(root);
        int ans=INT_MIN;
        vector<int>real_ans;
        
        for(auto i:gg)
        {
            if(i.second>ans)
            {
             ans=i.second;
        
            }
       
        }
        for(auto i:gg)
        {
            if(i.second==ans)
            {
             real_ans.push_back(i.first);
        
            }
        }
        
       return real_ans; 
        
    }
};