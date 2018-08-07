user = input()
passwd = input()

for i in range(2):
    if user == 'Kate' and passwd == '666666':
        print('登录成功！')
        break
    else:
        user = input()
        passwd = input()
else:
    print('3次用户名或者密码均有误！退出程序。')

