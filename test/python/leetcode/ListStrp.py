
ls = [0,0,1,1,1,2,2,3,3,4]
ls = []
n = 0
for i in ls:
    if i != ls[n]:
        n += 1
        ls[n] = i

        


print(ls)
print(n+1)