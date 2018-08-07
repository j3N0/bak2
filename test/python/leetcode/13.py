from timeit import timeit
dict = {'I': 1,
    'V': 5,
    'X': 10,
    'L': 50,
    'C': 100,
    'D': 500,
    'M': 1000}


def romanToInt(s):
    sum = 0
    for i in dict.keys():
        sum += dict.get(i) * s.count(i)
    sum -= (s.count('IX') + s.count('IV'))*2
    sum -= (s.count('XL') + s.count('XC'))*20
    sum -= (s.count('CD') + s.count('CM'))*200
    return sum

def romanToInt2(s): 
    sum = 0
    for k in range(len(s)-1):
        if dict[s[k]] < dict[s[k+1]]:
            sum -= dict[s[k]]
        else:
            sum += dict[s[k]]
    return sum + dict[s[-1]]
            

print(timeit("romanToInt('MDCLXVI')",'from __main__ import romanToInt', number=10000))

print(timeit("romanToInt2('MDCLXVI')",'from __main__ import romanToInt2', number=10000))

        
    


