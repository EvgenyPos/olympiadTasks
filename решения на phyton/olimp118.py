s = input().split(' ')
n = int(s[0])
k = int(s[1])
null = 0
i = 0
c = [1] * n
while null < n - 1:
    for w in range(k):
        i += 1
        if i > n:
            i = 1
        while c[i - 1] == 0:
            i += 1
            if i > n:
                i = 1
    c[i - 1] = 0
    null += 1
for i in range(0, n):
    if c[i]==1:
        print(i+1)
        break
    
