a=int(input())
c=0
if a>0:
    for i in range(1,a+1):
        c+=i
else:
    for i in range(a,2):
        c+=i
print(c)
