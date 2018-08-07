class Node(object):
    def __init__(self, val, children):
        self.val = val
        self.children = children

def postorder(root):
    ls = []
    if root:
        if root.children:
            for i in root.children:
                ls += postorder(i)
        ls += root.val
    return ls