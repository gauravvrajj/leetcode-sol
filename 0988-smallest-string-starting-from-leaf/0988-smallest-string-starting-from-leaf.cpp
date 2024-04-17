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
public:vector<string>a;
    void df(TreeNode* root, string d)
    {
       if(!root)
           return;
       if(root->right==NULL&&root->left==NULL)
       {  string g=d+(char)(root->val+'a');
          reverse(g.begin(),g.end());
          a.push_back(g);
           return;
       }
   
        
        df(root->left,d+(char)(root->val+'a'));
         df(root->right,d+(char)(root->val+'a'));
    }
    string smallestFromLeaf(TreeNode* root) {
        
        
        string d="";
        df(root,d);
        
        sort(a.begin(),a.end());
      
        return a[0];
        
    }
};