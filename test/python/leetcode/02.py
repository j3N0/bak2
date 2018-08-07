class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

a = ListNode(2)
b = ListNode(4)
c = ListNode(3)
d = ListNode(5)
e = ListNode(6)
f = ListNode(4)
l1 = a
a.next = b
b.next = c
l2 = d
d.next = e
e.next = f

dummyHead = ListNode(-1)
cur = dummyHead
carry = 0
while l1 or l2 or carry:
    a = b = 0
    if l1:
        a = l1.val
        l1 = l1.next
    if l2:
        b = l2.val
        l2 = l2.next
    
    carry, val = divmod(a + b + carry, 10)
    cur.next = ListNode(val)
    cur = cur.next
   




while dummyHead != None:
    print(dummyHead.val)
    dummyHead = dummyHead.next
        

    