n, w = map(int, input().split())
a = []
for i in range(n):
    ai = int(input())
    a.append(ai)

exist = False
for bit in range((1 << n)):
    sum = 0
    for i in range(n):
        if bit & (1 << i):
            sum += a[i]

    if sum == w:
        exist = True

if exist:
    print("Yes")
else:
    print("No")