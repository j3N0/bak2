
words = ["Hello", "Alaska", "Dad", "Peace"]
st1 = set('qwertyuiop')
st2 = set('asdfghjkl')
st3 = set('zxcvbnm')

def findWords(words):
    ls = []
    for word in words:
        st = set(word.lower())
        if st <= st1 or st <= st2 or st <= st3:
            ls.append(word)
    print(ls)
            
findWords(words)