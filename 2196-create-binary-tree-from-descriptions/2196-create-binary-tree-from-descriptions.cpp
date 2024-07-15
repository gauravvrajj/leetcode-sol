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
    

    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        
        unordered_map<int,TreeNode*>gg;
        for(auto i:descriptions)
        { 
             if(gg.count(i[0]))
            {
                if(i[2]==1){
                    
                if(gg.count(i[1])){
                    gg[i[0]]->left=gg[i[1]];
                }
                else{
                    TreeNode* x=new TreeNode(i[1]);
                    gg[i[0]]->left= x;
                    gg[i[1]]=x;
                }
                    
                }
                else{
                    
                if(gg.count(i[1])){
                    gg[i[0]]->right=gg[i[1]];
                }
                else{
                    TreeNode* x=new TreeNode(i[1]);
                    gg[i[0]]->right= x;
                    gg[i[1]]=x;
                }
                    
                }
            }
            else
            {
                TreeNode* x=new TreeNode(i[0]);
                 gg.insert({i[0],x});
                if(i[2]==1){
                if(gg.count(i[1])){
                    gg[i[0]]->left=gg[i[1]];
                }
                else{
                    TreeNode* z=new TreeNode(i[1]);
                    gg[i[0]]->left= z;
                    gg[i[1]]=z;
                }
                }
                else{
                    
                if(gg.count(i[1])){
                    gg[i[0]]->right=gg[i[1]];
                }
                else{
                    TreeNode* z=new TreeNode(i[1]);
                    gg[i[0]]->right= z;
                    gg[i[1]]=z;
                }
                    
                }
            
            }  
        }
      unordered_set<int>vv;
      unordered_set<int>bb;
      for(auto i:descriptions)
      {
          vv.insert(i[1]);
      }
      for(auto i:descriptions)
      {
          if(!vv.count(i[0]))
              return gg[i[0]];
      }
        
        return NULL;
        
        
    }
};