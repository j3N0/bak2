#score.py

score = eval(input())
if score < 70:
    grade = 'D'
elif score < 80:
    grade = 'C'
elif score < 90:
    grade = 'B'
elif score <= 100:
    grade = 'A'
print('rank: {}'.format(grade))
