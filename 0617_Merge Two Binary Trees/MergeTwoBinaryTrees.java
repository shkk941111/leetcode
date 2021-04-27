/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */

class Solution {
    public TreeNode mergeTrees(TreeNode root1, TreeNode root2) {
        if (root1 == null) {  //若第一个二叉树为空，则返回第二个二叉树作为合并后二叉树
            return root2;
        }
        if (root2 == null) {  //若第二个二叉树为空，则返回第一个二叉树作为合并后二叉树
            return root1;
        }
        TreeNode merged = new TreeNode(root1.val + root2.val);  //创建新节点，值为两个二叉树之和
        merged.left = mergeTrees(root1.left, root2.left);  //合并二叉树左支为两个二叉树左支之和
        merged.right = mergeTrees(root1.right, root2.right);  //合并二叉树右支为两个二叉树右支之和
        return merged;  //返回合并后二叉树
    }
}
