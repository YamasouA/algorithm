n, v = map(int, input().split())
a = []

for i in range(n):
    ai = int(input())
    a.append(ai)

exist = False
for i in range(n):
    if a[i] == v:
        exist = True

if exist:
    print("Yes")
else:
    print("No")
