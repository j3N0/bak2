sum = 0
flag = 1
for i in range(1, 967):
    sum += flag * i
    flag *= -1

print(sum)

