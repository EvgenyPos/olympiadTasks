def ss(number, base):
    digits = '0123456789abcdef'
    result = ''
    while number > 0:
        result = digits[number % base] + result
        number //= base
    return result
s1=input().split(' ')
s2=input().split(' ')
c1=ss(int(s1[0]),int(s1[1]))
c2=ss(int(s2[0]),int(s2[1]))
s1=0
s2=0
for i in range(0,len(c1)):
    if c1[i]=='1':
        s1=s1+1
    elif c1[i]=='2':
        s1=s1+2
    elif c1[i]=='3':
        s1=s1+3
    elif c1[i]=='4':
        s1=s1+4
    elif c1[i]=='5':
        s1=s1+5
    elif c1[i]=='6':
        s1=s1+6
    elif c1[i]=='7':
        s1=s1+7
    elif c1[i]=='8':
        s1=s1+8
    elif c1[i]=='9':
        s1=s1+9
    elif c1[i]=='a':
        s1=s1+10
    elif c1[i]=='b':
        s1=s1+11
    elif c1[i]=='c':
        s1=s1+12
    elif c1[i]=='d':
        s1=s1+13
    elif c1[i]=='e':
        s1=s1+14
    elif c1[i]=='f':
        s1=s1+15
for i in range(0,len(c2)):
    if c2[i]=='1':
        s2=s2+1
    elif c2[i]=='2':
        s2=s2+2
    elif c2[i]=='3':
        s2=s2+3
    elif c2[i]=='4':
        s2=s2+4
    elif c2[i]=='5':
        s2=s2+5
    elif c2[i]=='6':
        s2=s2+6
    elif c2[i]=='7':
        s2=s2+7
    elif c2[i]=='8':
        s2=s2+8
    elif c2[i]=='9':
        s2=s2+9
    elif c2[i]=='a':
        s2=s2+10
    elif c2[i]=='b':
        s2=s2+11
    elif c2[i]=='c':
        s2=s2+12
    elif c2[i]=='d':
        s2=s2+13
    elif c2[i]=='e':
        s2=s2+14
    elif c2[i]=='f':
        s2=s2+15
if s1==s2:
    print(s1)
else:
    print('0')
