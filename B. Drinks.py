n = int(input())

sum = 0
for i in range (n):
                 arr= list(map(int,input().split()))
                 sum = arr +sum
ans = sum/n
print (ans)