cypher= [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
words = ["gin", "zen", "gig", "msg"]

st = set()
for word in words:
    code = ''
    for i in word:
        code += cypher[(ord(i) - 97)]
    st.add(code)


print(len(st))

