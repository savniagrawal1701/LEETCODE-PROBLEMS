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
    bool isUnivalTree(TreeNode* root) {
      if (root == nullptr) {
            return true; 
        }
        
        // 1. Check if the left child exists and has a different value
        if (root->left != nullptr && root->left->val != root->val) {
            return false;
        }
        
        // 2. Check if the right child exists and has a different value
        if (root->right != nullptr && root->right->val != root->val) {
            return false;
        }
        
        // 3. Recursively check both subtrees
        bool lh = isUnivalTree(root->left);
        bool rh = isUnivalTree(root->right);
        
        // Both subtrees must also be univalued
        return lh && rh;
    }
};
