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
    bool isSymmetric(TreeNode* root) {
       return root==NULL || Symmetric(root->left,root->right);
    }
    bool Symmetric(TreeNode* left,TreeNode* right){
        if(right==NULL||left==NULL){
            return left==right;
        }
        if(left->val!=right->val){
            return false;
        }
        return Symmetric(left->left,right->right)&&Symmetric(left->right,right->left);
    }
};
