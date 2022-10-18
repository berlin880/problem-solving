n,k=map(int,input().split())
a= list(map(int,input().split()))
p =0 
for i in range(0,n):
    if a[k-1]==0 and a[i] == a[k-1]:
                        p+=0
    elif a[k-1]<=a[i]:
        p+=1
else:
     p+=0
print(p)
