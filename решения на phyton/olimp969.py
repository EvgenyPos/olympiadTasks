print('для проверки ответов')
#while True:
def osn(s):
    #s=input().split(' ')
    h=6
    c=2
    o=c%(int(s[1]))
    for i in range(1, int(s[0])+1):
        c=c*c
        #hc=len(str(c))
    o=c%(int(s[1]))
        #if hc>h:
            #c=int(str(c)[hc-h:])
    #print(c%(int(s[1])))
    return o

s=[0]*2
for n in range(0, 100001):
    for m in range(2, 1001):
        s[0]=str(n)
        s[1]=str(m)
        o=osn(s)
        pro=(2**(2**n))%m
        if o!=pro:
            print(n, m, o, pro)
