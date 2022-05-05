word = input()
l = 0
u = 0
for i in word:
    if i.islower():
        l+=1
    else:
        u+=1
if l>=u:
    print(word.lower())
else:
    print(word.upper())
