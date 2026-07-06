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
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if (root == nullptr) return nullptr;

        root->left = removeLeafNodes(root->left, target);
        root->right = removeLeafNodes(root->right, target);
        
        if (root->left == nullptr && root->right == nullptr && root->val == target) {
            return nullptr; 
        }
        
        return root;
    }
};

// class Solution {
// public:
//     TreeNode* removeLeafNodes(TreeNode* root, int target) {
//         if (root == nullptr) return nullptr; 

//         if (root->left == nullptr && root->right == nullptr && root->val == target) {
//             return nullptr; // Clears the leaf node
//         } 
//         else { 
//             root->left = removeLeafNodes(root->left, target);
//             root->right = removeLeafNodes(root->right, target);
//         }
        
//         return root; 
//     }
// };

// This is happening because your code checks the nodes from the top down instead of the bottom up.When you check a node before looking at its children, you completely miss nodes that become leaves after their children are deleted.
