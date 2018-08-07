N = 22 
str = bin(N)[2::]
last, ans = 32, 0
for i in range(len(str)):
    if str[i] == '1':
        ans = max(i - last, ans)
        last = i

