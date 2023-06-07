n=int(input())
a=input()
a=a.split(' ')
s=0
p=1
cMax=-100
cMin=100
iMax=0
iMin=0
for i in range(0, n):
    a[i]=int(a[i])
    if cMax<a[i]:
        cMax=a[i]
        iMax=i
    if cMin>a[i]:
        cMin=a[i]
        iMin=i
    if a[i]>0:
        s=s+a[i]
for i in range(1,abs(iMax-iMin)):
    if iMax>iMin:
        p=p*a[iMin+i]
    else:
        p=p*a[iMax+i]
print(s, p)

