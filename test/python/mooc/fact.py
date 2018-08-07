
def fact(n):
    if n == 1:
        return 1
    else:
        return fact(n-1) * n


n = eval(input())

if type(n) == int and n > 0:
    sum = 0
    for i in range(1, n+1):
        sum += fact(i)
    print(sum)
else:
    print('输入有误，请输入正整数')

