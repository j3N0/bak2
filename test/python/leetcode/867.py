A = [[1,2,3],[4,5,6],[7,8,9]]

ls = []
A = [[5], [8]]
for i in range(len(A[0])):
    temp = []
    for j in range(len(A)):
        temp.append(A[j][i])
    ls.append(temp)
        

ls = [[A[j][i] for j in range(len(A))] for i in range(len(A[0]))]


print(ls)

