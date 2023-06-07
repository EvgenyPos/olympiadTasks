n=int(input())
a=input().split(' ')
o=''
for k in range(0, n):
    Min=101
    for i in range(0, n):
        A=int(a[i])
        if A < Min:
            Min=A
            I=i
    o+=str(Min) + ' '
    a[I]=1000
print(o)
