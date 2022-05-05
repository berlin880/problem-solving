n = int(input())
j = 1
for i in range(n):

        x = str(input())
        if i==0:
            temp = x
        if temp[1]==x[0]:
            j = j + 1
        temp = x
print(j)