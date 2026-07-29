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
   void inorder(TreeNode* root,vector<int>&nodes) {
        if (root == nullptr) {
            return;
        }
        inorder(root->left,nodes);
        nodes.push_back(root->val);
        inorder(root->right,nodes);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int>range;
        inorder(root, range);
        int totalSum = 0;
     
        for (int val : range) {
            if (val >= low && val <= high) {
                totalSum += val;
            }
        }
        
        return totalSum; 
    }
};
