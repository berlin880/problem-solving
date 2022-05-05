n = int(input())
for i in range(n):
    x = str(input())
    l = len(x)
    if l >10:
        print(x[0],end='')
        print(l-2,end='')
        print(x[l-1])
    else:
        print(x)
