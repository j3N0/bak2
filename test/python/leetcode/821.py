S = "loveleetcode"
C = 'e'

ls = []
for i in range(len(S)):
    left = S[:i+1][::-1].find(C)
    right = S[i:].find(C)
    if left == -1 or right = -1:
        ls.append(max(left, right))
        continue

    ls.append(min(left, right))
print(ls)
