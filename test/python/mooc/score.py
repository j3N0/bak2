
rank = ''
try:
    score = eval(input())
    if not 0 <= score <= 100:
        raise BaseException
    if score >= 90:
        rank = 'A'
    elif score >= 80:
        rank = 'B'
    elif score >= 70:
        rank = 'C'
    elif score >= 60:
        rank = 'D'
    else:
        rank = 'E'
    print('输入成绩属于{}级别。'.format(rank))

except BaseException:
    print('输入数据有误！')
else:
    if rank in ['A', 'B', 'C', 'D']:
        print('祝贺你通过考试！')

finally:
    print('好好学习，天天向上！')
