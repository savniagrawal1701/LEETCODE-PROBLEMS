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
    bool findTarget(TreeNode* root, int k) {
        vector<int> seq;
        inorder( root, seq);
        int n =seq.size();
        int i=0;
        int j =n-1;
        while(i<j){
        int sum=seq[i]+seq[j];
        if(sum<k){
            i++;
        }else if(sum>k){
            j--;
        }else{
            return true;
        }
        }
        return false;
    }
};
