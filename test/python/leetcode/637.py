class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

def averageOfLevels(root):
    if root:
        ans = []
        queue = [root]
        while queue:
            ans.append(sum([i.val for i in queue])/len(queue))
            ls = []
            for i in queue:
                if i.left:
                    ls.append(i.left)
                if i.right:
                    ls.append(i.right)
            queue = ls[:]
        return ans

def average_bfs2(root):
    if root:
        ans = []
        q = [root]
        while q:
            n = len(q)
            sum = 0
            for i in range(n):
                node = q.pop(0)
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
                sum += node.val
            ans.append(sum / n)
        return ans


def average_bfs(root):
    from queue import Queue
    if root:
        ans = []
        q = Queue()
        q.put(root)
        while not q.empty():
            n = q.qsize()
            sum = 0
            for i in range(n):
                node = q.get()
                if node.left:
                    q.put(node.left)
                if node.right:
                    q.put(node.right)
                sum += node.val
            ans.append(sum / n)
        return ans

def average_dfs(root):
    ls = []
    def dfs(node, level = 0):
        if node:
            if len(ls) <= level:
                ls.append([0,0])
            ls[level][0] += node.val
            ls[level][1] += 1
            dfs(node.left, level + 1)
            dfs(node.right, level + 1)
    dfs(root)
    return [s/float(l) for s, l in ls]




root = TreeNode(3)
left = TreeNode(9)
right = TreeNode(20)
root.left = left
root.right = right
right.left = TreeNode(15)
right.right = TreeNode(7)
#print(averageOfLevels(root))
#print(average2(root))
#print(average_dfs(root))
print(average_bfs2(root))

            
        


