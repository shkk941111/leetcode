/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* _increasingBST(struct TreeNode* root,struct TreeNode* pre){
    if(!root){
        return pre;
    }
    struct TreeNode* tmp = _increasingBST(root->left,root);
    root->left = NULL;
    root->right = _increasingBST(root->right,pre);
    return tmp;
}
struct TreeNode* increasingBST(struct TreeNode* root){
        return _increasingBST(root,NULL);
}
