# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def mergeTrees(self, root1: TreeNode, root2: TreeNode) -> TreeNode:
        if not root1: #若第一个二叉树为空，则返回第二个二叉树作为合并后二叉树
            return root2
        if not root2:  #若第二个二叉树为空，则返回第一个二叉树作为合并后二叉树
            return root1
        
        merged = TreeNode(root1.val + root2.val)  #创建新节点，值为两个二叉树之和
        merged.left = self.mergeTrees(root1.left, root2.left)  #合并二叉树左支为两个二叉树左支之和
        merged.right = self.mergeTrees(root1.right, root2.right)  #合并二叉树右支为两个二叉树右支之和
        return merged  #返回合并后二叉树
