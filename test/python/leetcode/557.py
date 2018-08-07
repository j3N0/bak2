s = "Let's take LeetCode contest"

ls = s.split()
ls = [s[::-1] for s in ls]
print(' '.join(ls))
print(' '.join(s.split()[::-1])[::-1])