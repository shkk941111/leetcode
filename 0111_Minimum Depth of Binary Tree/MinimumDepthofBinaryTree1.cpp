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
    int minDepth(TreeNode* root) {
        //根节点为空，深度为0
        if(root == NULL){
            return 0; 
        }  
        else{
            //左子结点为空，且右子结点不为空，遍历右子树并加一
            if(root->left == NULL && root->right != NULL){
                return minDepth(root->right) + 1;
            }
            //右子结点为空，且左子结点不为空，遍历左子树并加一   
            else if(root->left != NULL && root->right == NULL){
                return minDepth(root->left) + 1;
            }
            //左右子结点都不为空，比较左右子树，取其深度小者并加一   
            else{
                return min(minDepth(root->left),minDepth(root->right)) + 1;
            }       
        }
    }
};
