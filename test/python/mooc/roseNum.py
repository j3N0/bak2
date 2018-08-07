def rose(n):
    sum = 0
    if n // 10:
        sum += rose(n//10)
    sum += pow(n % 10, 4)
    return sum

for i in range(1000, 10000):
    if i == rose(i):
        print(i)
