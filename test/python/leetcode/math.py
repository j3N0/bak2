n = 10000
for i in range(1,n):
    for j in range(1,n):
        if j * i == i + j:
            print(i, j)