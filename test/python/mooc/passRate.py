n = eval(input())
x = input()
count = 0
pass_count = 0
while x != '':
    x = eval(x)
    count += 1
    if x >= n:
        pass_count += 1
    x = input()
else:
    if pass_count == 0 and count == 0:
        pass_count += 1
        count = pass_count

print('合格率{:.2%}'.format(pass_count/count))



