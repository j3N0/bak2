widths = [10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10]
S = "abcdefghijklmnopqrstuvwxyz"

lines, sum = 1, 0

for ch in S:
    sum += widths[ord(ch) - ord('a')]
    if sum > 100:
        lines += 1
        sum = widths[ord(ch) - ord('a')]
print([lines, sum])

