n, k = map(int, input().split())
a = []
b = []
for i in range(n):
    ai = int(input())
    a.append(ai)
for i in range(n):
    bi = int(input())
    b.append(bi)

min_value = 100000000

for i in range(n):
    for j in range(n):
        if (a[i] + b[j] < k):
             continue
        if (a[i] + b[j] < min_value):
            min_value = a[i] + b[j]

print(min_value)