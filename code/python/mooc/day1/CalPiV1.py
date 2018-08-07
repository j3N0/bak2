#CaPiV1.py
pi = 0
N = 10000
for k in range(N):
    pi += 1/(16**k) * (\
            4/(8*k+1) - 2/(8*k+4) - \
            1/(8*k+5) - 1/(8*k+6))
print('Pi is {}'.format(pi))
