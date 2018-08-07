numRows = 5

last, ans = [], []
for n in range(numRows):
    last = [0] + last
    now = [last[i] + last[i+1] for i in range(len(last)-1)] + [1]
    last = now[:]
    ans.append(now)
    
    
print(ans)