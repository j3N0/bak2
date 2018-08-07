#TextProBarV1.py
import time

scale = 10

for i in range(scale+1):
    a = '*' * i
    b = '.' * (scale - i)
    #c = i / scale * 100
    c = i / scale
    #print('{:^3.0f}%[{}->{}]'.format(c, a, b))
    print('\r{:^4.0%}[{}->{}]'.format(c, a, b), end='')
    
    time.sleep(0.1)

print('')
