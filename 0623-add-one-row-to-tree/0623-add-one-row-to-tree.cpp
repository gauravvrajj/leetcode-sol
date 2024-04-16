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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1)
        {
            return new TreeNode(val,root,NULL);
        }
        queue<TreeNode*>gg;
        gg.push(root);
        depth--;
        while(gg.size())
        {
         int p=gg.size();  
         if(depth==1)
            {
              while(gg.size())
            {
                  
                 gg.front()->left=new TreeNode(val,gg.front()->left,NULL);
                   gg.front()->right=new TreeNode(val,NULL,gg.front()->right);
//               TreeNode* x=gg.front()->left;
//               TreeNode* y=gg.front()->right;
             
//               gg.front()->left=new TreeNode(val);
//               gg.front()->right=new TreeNode(val);
//               if(x!=NULL)
//               gg.front()->left->left=x;
//               if(y!=NULL)
//               gg.front()->right->right=y;
              gg.pop();
            }
             break;
            }    
        
        
            while(p)
            {
              TreeNode* x=gg.front();
              gg.pop();
              if(x->left!=NULL)
              gg.push(x->left);
              if(x->right!=NULL)
              gg.push(x->right);
                p--;
            }
            depth--;
        }
        
        return root;
        
    }
};