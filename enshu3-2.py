n, v = map(int, input().split())
a = []
for i in range(n):
    ai = int(input())
    a.append(ai)
flag = False
count = 0
for i in range(n):
    if a[i] == v:
        count += 1

print(count)