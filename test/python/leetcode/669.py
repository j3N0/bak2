class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

def trimBST(root, L, R):
    if not root:
        return 
    if root.val < L:
        return trimBST(root.right, L, R)
    elif root.val > R:
        return trimBST(root.left, L, R)
    ｓ
    root.left = trimBST(root.left, L, R)
    root.left = trimBST(root.right, L, R)
    
    return root
    
#也不知道怎么提升速度了　，我已经放弃了