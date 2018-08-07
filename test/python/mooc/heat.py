
def cal2j(n):
    return n * 4.186
def j2cal(n):
    return n / 4.186
m = input()
if m[-3:] == 'cal':
    m = eval(m.rstrip('cal'))
    print('{:.3f}J'.format(cal2j(m)))
elif m[-1] == 'J':
    m = eval(m.rstrip('J'))
    print('{:.3f}cal'.format(j2cal(m)))


