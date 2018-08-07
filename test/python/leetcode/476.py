num = 5
mask = 2 ** (len(bin(num)) -2) -1 
print(num^mask)