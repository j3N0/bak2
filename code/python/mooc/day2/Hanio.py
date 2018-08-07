#Hanio.py
count = 0
def hanio(n, src, dst, mid):
    global count 
    if n == 1:
        print('{}:{}->{}'.format(1, src, dst))
        count += 1
    else:
        hanio(n-1, src, mid, dst)
        print('{}:{}->{}'.format(n, src, dst))
        count += 1
        hanio(n-1, mid, dst, src)

if __name__ == '__main__':
    hanio(3, 'A', 'C', 'B')
    print('count: {}'.format(count))
