class Node(object):
    def __init__(self, val, children):
        self.val = val
        self.children = children

def maxDepth(root):

    return 1＋max([maxDepth(child) for child in root.children]+[0]) if root else 0

    #加[0]是为了防止root没有children的情况,max的参数不能为空