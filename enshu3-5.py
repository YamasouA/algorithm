n = int(input())
a = list(map(int, input().split()))

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