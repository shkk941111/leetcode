# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def invertTree(self, root: TreeNode) -> TreeNode:
        if not root:  #若根节点为空，返回0
            return None
        root.right,root.left = root.left,root.right #左右子树交换
        self.invertTree(root.left)  #右子树值赋值给左子树
        self.invertTree(root.right)  #左子树值赋值给右子树
        return root  #输出二叉树
