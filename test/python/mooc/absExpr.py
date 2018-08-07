n = eval(input())
flag = 1 if n >= 0 else -1
print('{} {} {} {}'.format(abs(n),\
        flag * (abs(n) + 10),\
        flag * abs(abs(n) - 10),\
        n*10))
