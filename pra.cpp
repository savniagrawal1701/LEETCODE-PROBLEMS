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
 //JUST TRY 
class Solution {
public:
void preorder(vector<int>& res , TreeNode* root1){
    if(root1==NULL){
        return ;
    }
    res.push_back(root1->val);
    preorder(res,root1->left);
    preorder(res,root1->right);
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>res;
        preorder(res,root1);
        preorder(res,root2);
        sort(res.begin(),res.end());
        return res;
    }
};