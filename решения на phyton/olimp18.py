n = int(input())
if n == 0 or n == 1:
    print('1')
else:
    c = 1
    for i in range(2, n + 1):
        c = c * i
    print(c)
