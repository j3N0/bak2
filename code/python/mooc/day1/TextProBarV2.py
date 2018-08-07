#TextProBarV1.py
import time
for i in 'ABCDEFG':
    print('\r{:3}%'.format(i, end=''))
    time.sleep(0.1)
print('')
