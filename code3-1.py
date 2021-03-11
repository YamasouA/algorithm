n, v = map(int, input().split())
a = []

for i in range(n):
    ai = int(input())
    a.append(ai)

exist = False
found_id = -1
for i in range(n):
    if a[i] == v:
        exist = True
        found_id = i

if exist:
    print("Yes")
    print(found_id)
else:
    print("No")
