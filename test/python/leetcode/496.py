from timeit import timeit
nums1 = [2,4]
nums2 = [1,2,3,4]

def nextGreaterElement(nums1, nums2):
    ans = []
    for i in nums1:
        index = nums2.index(i)
        for j in nums2[index+1:]:
            if j > i:
               ans.append(j)
               break
        else:
            ans.append(-1) 
    return ans
#print(nextGreaterElement(nums1, nums2))
def nex2(nums1, nums2):
    dict = {}
    stack = []
    ans = []
    for num in nums2:
        while len(stack) and stack[-1] < num:
            dict[stack.pop()] = num
        stack.append(num)
    for i in nums1:
        ans.append(dict.get(i, -1))
    return ans


print(timeit("nex2([1,2,3,4,7,9,5,6], [5, 4, 3, 7, 2, 1, 6,7,8,9,10])",'from __main__ import nex2', number=100))

print(timeit("nextGreaterElement([1,2,3,4,7,9,5,6], [5, 4, 3, 7, 2, 1, 6,7,8,9,10])",'from __main__ import nextGreaterElement', number=100))
#这测试没什么卵用！