#a = eval(input())
n = 9
nums = [2,7,11,15]
for i in range(len(nums)):
    if n - nums[i] in nums[i+1:]:
        print([i,nums.index(n-nums[i])])
    


            