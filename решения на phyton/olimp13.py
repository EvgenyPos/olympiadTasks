s=input().split(' ')
k=0
b=0
s=[[int(s[0][0]),int(s[0][1]),int(s[0][2]),int(s[0][3])],[int(s[1][0]),int(s[1][1]),int(s[1][2]),int(s[1][3])]]
for i in range(0,4):
    if s[0][i]==s[1][i]:
        b+=1
        s[0][i]=-1
        s[1][i]=-1
for i1 in range(0,4):
    for i2 in range(0,4):
        if s[0][i1]!=-1 and s[1][i2]!=-1:
            if s[0][i1]==s[1][i2]:
                k+=1
                s[0][i1]=-1
                s[1][i2]=-1
print(str(b)+' '+str(k))
