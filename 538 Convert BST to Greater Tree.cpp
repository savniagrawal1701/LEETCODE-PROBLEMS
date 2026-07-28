/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
//GST
class Solution {
public:
    void inorder(TreeNode* root, vector<int>& nodes) {
        if (!root)
            return;
        inorder(root->left, nodes);
        nodes.push_back(root->val);
        inorder(root->right, nodes);
    }
void updateTree(TreeNode* root, unordered_map<int, int>& mpp) {
        if (!root)
            return;
        
      
        updateTree(root->left, mpp);
        root->val = mpp[root->val];
        updateTree(root->right, mpp);
    }
    TreeNode* bstToGst(TreeNode* root) {
        vector<int> seq;
        inorder(root, seq);
        unordered_map<int, int> mpp;
        int currsum = 0;
        for (int i = seq.size() - 1; i >= 0; i--) {
             currsum = currsum + seq[i];
            mpp[seq[i]] = currsum;
           
        }
  updateTree(root, mpp);
        
        return root;
    }
};
