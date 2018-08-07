
str = input()
low = ord('a')
up = ord('A')
for i in str:
    if i.isalpha():
        if i.islower():
            print(chr(low+(ord(i)-low+3)%26), end='')
        else:
            print(chr(up+(ord(i)-up+3)%26), end='')
    else:
        print(i, end='')
        
print('')
