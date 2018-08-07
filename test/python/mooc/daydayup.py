N = eval(input())
dayup = 1.0
daydown = 1.0
for i in range(365):
    dayup, daydown = dayup*(1+N/1000), daydown*(1-N/1000) 

print('{:.2f},{:.2f},{:.0f}'.format(dayup, daydown, dayup // daydown))
