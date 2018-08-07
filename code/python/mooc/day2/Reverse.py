#Reverse.py
def rvs(str):
    if str == '':
        return ''
    else:
        return rvs(str[1:]) + str[0]

if __name__ == '__main__':
    str = input()
    print(rvs(str))
