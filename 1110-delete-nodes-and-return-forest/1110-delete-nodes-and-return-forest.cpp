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
    unordered_set<TreeNode*> toDeleteNodes;
    
    void helper(TreeNode* root, unordered_set<int>& toDelete, TreeNode* parent, bool isLeftChild) {
        if (!root) return;

        // Recursively process the left and right children
        helper(root->left, toDelete, root, true);
        helper(root->right, toDelete, root, false);

        // If current node needs to be deleted
        if (toDelete.count(root->val)) {
            if (root->left) ans.push_back(root->left);
            if (root->right) ans.push_back(root->right);

            // If the parent exists, disconnect the current node from the parent
            if (parent) {
                if (isLeftChild) parent->left = nullptr;
                else parent->right = nullptr;
            }

            // Mark the node for deletion
            toDeleteNodes.insert(root);
        }
    }

    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& toDelete) {
        unordered_set<int> toDeleteSet(toDelete.begin(), toDelete.end());

        helper(root, toDeleteSet, nullptr, false);

        // If the root node is not deleted, add it to the result forest
        if (!toDeleteSet.count(root->val)) {
            ans.push_back(root);
        }

        // Delete the marked nodes
        for (TreeNode* node : toDeleteNodes) {
            delete node;
        }

        return ans;
    }
};