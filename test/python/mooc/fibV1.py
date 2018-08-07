#fibV1.py
def fib(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    else:
        return fib(n-1) + fib(n-2)

n = eval(input())
fibls = []
sum = 0
i = 0
while True:
    if fib(i) > n:
        break
    fibls.append(str(fib(i)))
    sum += fib(i)
    i += 1
print('{}, {}, {:.0f}'.format(', '.join(fibls), sum, sum / len(fibls)))
