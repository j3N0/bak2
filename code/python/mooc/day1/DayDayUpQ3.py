#DayDayUpQ3.py
dayfactor = 0.01

status = 1
for i in range(365):
    if i % 7 in [6, 0]:
        status *= 1 - dayfactor
    else:
        status *= 1 + dayfactor

print('Status: {:.2f}'.format(status))

