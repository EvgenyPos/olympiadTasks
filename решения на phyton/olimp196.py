n = int(input())
arr = [0] * n 
for i in range(n): 
    arr[i] = [0] * n
x=0
y=0
w=1
arr[y][x]=1
a=1
flag=True
while flag==True:
    if w==1:
        while x+1<=n-1 and arr[y][x+1]==0:
            a+=1
            x+=1
            arr[y][x]=a
        w+=1
        if a==n*n:
            flag=False
    elif w==2:
        while y+1<=n-1 and arr[y+1][x]==0:
            a+=1
            y+=1
            arr[y][x]=a
        w+=1
        if a==n*n:
            flag=False
    elif w==3:
        while x-1>=0 and arr[y][x-1]==0:
            a+=1
            x-=1
            arr[y][x]=a
        w+=1
        if a==n*n:
            flag=False
    elif w==4:
        while y-1>=0 and arr[y-1][x]==0:
            a+=1
            y-=1
            arr[y][x]=a
        w+=1
        if a==n*n:
            flag=False
    else:
        w=1
h=len(str(a))
s=''
for y in range(0,n):
    for x in range(0,n):
        arr[y][x]=str(arr[y][x])
        while len(str(arr[y][x]))<h+1:
            arr[y][x]=' '+str(arr[y][x])
        s=s+arr[y][x]
    s=s+'\n'
print(s[:(len(s)-1)])



















        
