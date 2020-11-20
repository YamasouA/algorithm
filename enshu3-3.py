n = int(input())
a = []
for i in range(n):
    ai = int(input())
    a.append(ai)

small = 10000
smallest = 100000
for i in range(n):
    if smallest > a[i]:
        small = smallest
        smallest = a[i]
    elif small > a[i]:
        small = a[i]
        
print(small)