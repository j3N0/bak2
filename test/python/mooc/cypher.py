
str = input()
m = ord('a')
for i in str:
    if i.isalpha():
        print(chr(m+(ord(i)-m+3)%26), end='')
    else:
        print(i, end='')
        
print('')