s=input().split(' ')
o=''
for x in range(-100, 101):
    if int(s[0])*x**3+int(s[1])*x**2+int(s[2])*x+int(s[3])==0:
        o+=str(x)+' '
print(o)
