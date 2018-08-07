#DayDayUpQ1.py
dayfactor = 0.005
dayup = (1 + dayfactor) ** 365
daydown = (1 - dayfactor) ** 365

print('Up: {:.2f}, Down: {:.2f}'.format(dayup, daydown))
