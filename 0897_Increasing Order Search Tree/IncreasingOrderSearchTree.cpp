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
    TreeNode* res = new TreeNode();
    TreeNode* temp = res;
    TreeNode* increasingBST(TreeNode* root) {
        if(root){
            increase(root);
        }
        return temp->right;
    }
    void increase(TreeNode* root){
        if(root){
            increase(root->left);
            res->right = new TreeNode(root->val);
            res->left = nullptr;
            res = res->right;
            if(root->right)
            increase(root->right);
        }
    }
};
