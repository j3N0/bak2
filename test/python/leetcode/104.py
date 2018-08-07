class TreeNode(object):
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

count = 0
def maxDepth(root):   
    if not root:
        return 0
    return 1 + max(maxDepth(root.left), maxDepth(root.right))
        
root = TreeNode(4)
root.left = TreeNode(2)
root.right = TreeNode(7)
print(maxDepth(root))
           