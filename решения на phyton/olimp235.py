s = input()
h = len(s)
Map = [[]]*101
for i in range(0, 101):
    Map[i]=[0]*101
x=51
y=51
n = 1
step = 0
ex = False
Map[y][x] = 1
for i in range(0, h):
    Map[y][x] = 1
    if s[i] == 'S':
        if n == 1:
            y -= 1
        elif n == 2:
            x += 1
        elif n == 3:
            y += 1
        else:
            x -= 1
        step += 1
        if Map[y][x] == 1:
            ex=True
            break
    elif s[i] == 'L':
        n -= 1
        if n < 1:
            n = 4
    elif s[i] == 'R':
        n += 1
        if n > 4:
            n = 1
if ex == True:
    print(step)
else:
    print('-1')
    
