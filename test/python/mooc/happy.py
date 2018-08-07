
def div(n):
    sum = 0
    while n / 10:
        sum += pow(n % 10, 2)
        n = n //10
    return sum

def isHappp(n):
    past = []

    while n != 1:
        n = div(n)
        if n in past:
            return False 
        past.append(n)
    return True

print(isHappp(eval(input())))

