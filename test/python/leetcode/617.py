
class TreeNode(object):
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None



def mergeTrees(t1, t2):    
    a = b = 0
    t1l = t1r = t2l = t2r = None
    if t1 == None and t2 == None:
        return 
    if t1:
        a = t1.val
        t1l = t1.left
        t1r = t1.right
    if t2:
        b = t2.val
        t2l = t2.left
        t2r = t2.right
    t3 = TreeNode(a + b)


    t3.left = self.mergeTrees(t1l, t2l)   
    t3.right = self.mergeTrees(t1r, t2r)
    return t3
    
def travel(t):
    if t:
        print(t.val)
        travel(t.left)
        travel(t.right)
    


t1 = TreeNode(1)
t1.left = TreeNode(3)
t1.right = TreeNode(2)
t2 = TreeNode(2)
#t2.left = TreeNode(1)
t2.right = TreeNode(3)
t3 = mergeTrees(t1, t2)

travel(t3)