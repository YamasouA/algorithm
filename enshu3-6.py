k, n = map(int, input().split())
count=0
for i in range(k+1):
    for j in range(k+1):
        z = n - i - j
        if z >= 0 and z <= k:
            count += 1

print(count)