class TreeNode(object):
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

A = [-10,-3,0,5,9]

def sortedArrayToBST(nums):
    if nums == []:
        return None
    root = TreeNode(nums[len(nums)//2])
    root.left = sortedArrayToBST(nums[:len(nums)//2])
    root.right = sortedArrayToBST(nums[len(nums)//2+1:])
    return root

def travel(root):
    if root:
        print(root.val)
        travel(root.left)
        travel(root.right)

root = sortedArrayToBST(A)
travel(root)