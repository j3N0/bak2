class TreeNode(object):
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

def invertTree(root):
    if not root:
        return
    tmp = root.left
    root.left = invertTree(root.right)
    root.right = invertTree(tmp)
    return root
    
def travel(root):
    if root:
        print(root.val)
        travel(root.left)
        travel(root.right)

root = TreeNode(4)
root.left = TreeNode(2)
root.right = TreeNode(7)

travel(root)
travel(invertTree(root))
