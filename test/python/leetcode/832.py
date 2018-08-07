A =  [[1,1,0],[1,0,1],[0,0,0]]

b = []
for i in A:
    temp = []
    for j in i[::-1]:       
        j = 1-j
        temp.append(j)
    b.append(temp)
print(b)