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
    unordered_map<int,vector<int>>gg;
    void dfs(TreeNode* root, int h)
    {
        if(root==NULL)
            return;
        gg[h].push_back(root->val);
        dfs(root->left,h+1);
        dfs(root->right,h+1);
    }
    bool isEvenOddTree(TreeNode* root) {
        dfs(root,0);
        for(auto i:gg)
        {
            if(i.first%2==0)
            {
             for(int j=0;j<i.second.size();j++)
             {
                if(i.second[j]%2==0)
                    return 0;
                 if(j<i.second.size()-1&&i.second[j]>=i.second[j+1])
                     return 0;
             }
            }
            else if(i.first%2!=0)
            {
             for(int j=0;j<i.second.size();j++)
             {
                if(i.second[j]%2!=0)
                    return 0;
                 if(j<i.second.size()-1&&i.second[j]<=i.second[j+1])
                     return 0;
             }
            }
        }
        
        return 1;
        
        
    }
};