
candies = [1,1,2,2,3,3]
def distributeCandies(candies):
    sum = len(candies) // 2
    diff = len(set(candies))
    if sum > diff:
        return diff
    else:
        return sum

#几乎一模一样的代码，　我的慢了快100ms 想不通