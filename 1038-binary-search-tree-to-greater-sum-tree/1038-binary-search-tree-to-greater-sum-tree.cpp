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
    vector<int>g;
    void gg(TreeNode* root)
    {
        if(!root)return;
        
        gg(root->left);
        g.push_back(root->val);
        gg(root->right);
    }
    void gg(TreeNode* root,unordered_map<int,int>&x,vector<int>&ans)
    {
        if(!root)return;
        root->val=root->val+ans[ans.size()-1]-ans[x[root->val]];
        gg(root->left,x,ans);
        gg(root->right,x,ans);
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        gg(root);
        vector<int>ans;
        int sum=0;
        for(auto i:g)
        {
            sum+=i;
            ans.push_back(sum);
        }
        unordered_map<int,int>x;
        int j=0;
        for(auto i:g)
        {
            x[i]=j;
            j++;
        }
        gg(root,x,ans);
        return root;
        
    }
};