sum = 0
def is_prime(n):
    for i in range(2, n):
        if n % i == 0:
            return False
    else:
        return True

for i in range(2, 101):
    if is_prime(i):
        sum += i

print(sum)
