n = 15

ls = []
for i in range(1, n+1):
    a = ''
    if i % 3 and i % 5:
        a += str(i)
    if not i % 3 :
        a += 'Fizz'
    if not i % 5 :
        a += 'Buzz'
    ls.append(a)
print(ls)