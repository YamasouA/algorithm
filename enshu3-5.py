n = int(input())
a = []
for i in range(n):
    ai = int(input())
    a.append(ai)
count = 0
flag = False

while True:
    for i in range(n):
        if a[i] % 2 != 0:
            flag = True
            break
        else:
            a[i] = int(a[i] / 2)

    if flag:
        break

    count += 1

print(count)