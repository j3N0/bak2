'''给定一个字符串，找出不含有重复字符的最长子串的长度。

示例：

给定 "abcabcbb" ，没有重复字符的最长子串是 "abc" ，那么长度就是3。

给定 "bbbbb" ，最长的子串就是 "b" ，长度是1。

给定 "pwwkew" ，最长子串是 "wke" ，长度是3。请注意答案必须是一个子串，"pwke" 是 子序列  而不是子串。
'''
str = "abba"
ans = 0

'''

for i in range(len(str)-1):
    for index, item in enumerate(str[i+1:]):
        if item in set(str[i:i+index+1]):
            ans = max(index+1, ans)
            break
    else:
        ls.append(len(str[i:]))

    
print(ans)

i = 0
j = 0
length = len(str)
st = set()
while i < length and j < length:
    if str[j] not in st:
        st.add(str[j])
        j += 1
        ans = max(ans, j - i)
    else:
        st.remove(str[i])
        i += 1
print(ans)
'''
length = len(str)
i = 0
dict = [0 for x in range(128)]
for j in range(length):   
    i = max(i, dict[str[j]] + 1)     #max意思是i不能后退，　因为之前加到dict有些值是冗余的            
    dict[str[j]] = j
    ans = max(ans, j - i + 1)
print(ans)

