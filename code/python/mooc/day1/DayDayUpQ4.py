#DayDayUpQ4.py
dayfactor = 0.01
A = 1.01 ** 365

def dayUP(df):
    dayup = 1
    for i in range(365):
        if i % 7 in [6, 0]:
            dayup *= 1 - 0.01
        else:
            dayup *= 1 + df
    return dayup

while dayUP(dayfactor) < A:
    dayfactor += 0.001

print('Dayfactor: {:.3f}'.format(dayfactor))
#print('Status: {:.2f}'.format(status))

