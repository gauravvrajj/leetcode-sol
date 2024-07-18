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
    
    void helper(TreeNode* root, int dist, vector<string>& gg, string s){
        
        if(!root)
            return;

        if(!root->right&&!root->left)
        {
                gg.push_back(s);
                return;
        }
        helper(root->left,dist,gg,s+'L');
         helper(root->right,dist,gg,s+'R');
        
    }
    int countPairs(TreeNode* root, int distance) {
        
        vector<string>gg;
        helper(root,distance,gg,"");
        // for(auto i:gg)
        //     cout<<i<<endl;
        int ans=0;
        for(int i=0;i<gg.size();i++)
        {
            for(int j=i+1;j<gg.size();j++)
            {
                int k=0,l=0;
                while(k<gg[i].size()&&l<gg[j].size()&&gg[i][k]==gg[j][l])
                {
                   
                    k++;
                    l++;
                }
                if((gg[i].size()-k+gg[j].size()-l)<=distance)ans++;
            }
        }
        
        return ans;
    }
};