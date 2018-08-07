class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

def middleNode(head):
    fast = slow = head
    while fast.next and fast:
        slow = slow.next
        fast = fast.next.next
    return slow
 
#两个指针
