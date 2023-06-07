s1 = input()
s2 = input()
h = len(s1)

var1 = 1
var2 = 1

nn1 = [0] * h
nn2 = [0] * h

for i in range(0, h):
    a = s1[i]
    nn1[i] = 1
    if a == 'a' or a == 'b' or a == 'c' or a == 'd' or a == 'e' or a == 'f' or a == 'g':
        var1 = var1 * 4
        nn1[i] = 4
    elif a == '?':
        var1 = var1 * 10
        nn1[i] = 10
    a = s2[i]
    nn1[i] = 1
    if a == 'a' or a == 'b' or a == 'c' or a == 'd' or a == 'e' or a == 'f' or a == 'g':
        var2 = var2 * 4
        nn2[i] = 4
    elif a == '?':
        var2 = var2 * 10
        nn2[i] = 10
        
arr1 = [''] * var1
arr2 = [''] * var2

for i in range(0, h):
    for x in range(0, nn1[
