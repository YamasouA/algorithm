n = int(input())
a = []
for i in range(n):
    ai = int(input())
    a.append(ai)
max = 0
min = 100000
for i in range(n):
    if a[i] < min:
        min = a[i]
    if a[i] > max:
        max = a[i]

print(max - min)