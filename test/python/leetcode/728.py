

def selfDividingNumbers(left, right):
    ls = []
    for i in range(left, right+1):
        for x in str(i):
            if x == '0' or i % int(x) != 0: break
        else:
            ls.append(i)
    print(ls)
selfDividingNumbers(1,22)
