def shui_xian(n):
    sum = 0
    if n // 10:
        sum += shui_xian(n//10)
    sum += pow(n % 10, 3)
    return sum

ls = []
for i in range(100, 1000):
    if i == shui_xian(i):
        ls.append(str(i))
print(','.join(ls))
