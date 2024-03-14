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
TreeNode* Create(vector<int>& v,int left,int right){
    if(left>right){
        return NULL;
    }
    long long int mid=(left+right)/2;
    TreeNode* node=new TreeNode(v[mid]);
    node->right=Create(v,mid+1,right);
    node->left=Create(v,left,mid-1);
    return node;
}
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return Create(nums,0,nums.size()-1);
    }
};
