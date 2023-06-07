s=input().split(' ')
n=int(s[0])
m=int(s[1])
k=int(s[2])
if n>k or m==n:
    i=0
    while True:
        m-=n
        i+=1
        if m<1:
            break
        else:
            m+=k
    print(i)
else:
    print('NO')
