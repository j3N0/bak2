#-*- coding: UTF-8 -*-

#global table, stack, index
table = []
stack = []
terminal = []
str = 'm+m*m#'




def process(index):
    global stack, str
    X = stack[-1]
    a = str[index]

    if X in terminal:
        if X == a:
            print('match')
            index += 1
            process(index)
        else:
            print('error')
    elif a == '#':
        if X == a:
            print('success')
        else:
            print('error')
    elif is_in_table(X, a):
        entry = get_table(X, a)
        
        for i in entry[::-1]:
            stack.append(i)

        process(index)
    else:
        print('error')
    
def is_in_table(X, a):
    return get_table(X, a)


def get_table(X, a):
    global table
    Vn = ''
    Vt = ''

    m = Vn.index(X)
    n = Vt.index(a)
    
    return table[m][n]


if __name__ == '__main__':

    stack.append('#')
    stack.append('S')
    process(0)