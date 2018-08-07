nums = [2,2,1]
def singleNumber(nums):
    set = set()
    for i in nums:
        if i not in set:
            set.add(i) 
        else:
            set.remove(i)
         
    return set.pop()    



    