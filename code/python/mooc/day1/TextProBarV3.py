#TextProBarV3.py
import time

scale = 50
print('start'.center(scale // 2, '='))

start = time.perf_counter()
for i in range(scale+1):
    a = '*' * i
    b = '.' * (scale - i)
    #c = i / scale * 100
    c = i / scale
    dur = time.perf_counter() - start
    #print('{:^3.0f}%[{}->{}]'.format(c, a, b))
    print('\r{:^4.0%}[{}->{}]{:.2f}s'.format(c, a, b, dur), end='')
    
    time.sleep(0.1)

print('')
