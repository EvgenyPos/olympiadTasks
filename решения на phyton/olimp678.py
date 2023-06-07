s = input()
a = [1, 0, 0]
for i in range(0, len(s)):
    if s[i] == "A":
        c = a[0]
        a[0] = a[1]
        a[1] = c
    elif s[i] == "B":
        c = a[2]
        a[2] = a[1]
        a[1] = c
    else:
        r = a[0]
        a[0] = a[2]
        a[2] = r
for i in range(0, 3):
    if a[i] == 1:
        print(i+1)
