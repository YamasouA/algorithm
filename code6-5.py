n = int(input())
h = []
s = []
for i in range(n):
    hi, si = map(int, input().split())
    h.append(hi)
    s.append(si)
#print(h, s)
left, right = 0, 10000000000000000000

while right - left > 1:
    mid = (right + left) // 2

    sec = []
    #各風船を割るまでの制限

    for i in range(n):
        sec.append((mid - h[i]) / s[i])

    sec.sort()
    for i in range(n):
        if sec[i] < i:
            left = mid
            break
        
    else:
        right = mid
   # print(left, right)

print(int(right))
