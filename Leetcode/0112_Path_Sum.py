class Solution:
    def hasPathSum(self, root, sum):
        """
        :type root: TreeNode
        :type sum: int
        :rtype: bool
        """
        return self.recurse(root, 0, sum)
    
    def recurse(self, root, current_sum, sum):
        if root == None:
            return False
        
        if root.left == None and root.right == None:
            return current_sum + root.val == sum
       
        l = self.recurse(root.left, current_sum + root.val, sum)
        r = self.recurse(root.right, current_sum + root.val, sum)
        return l or r
