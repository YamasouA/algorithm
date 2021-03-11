import bisect
a = list(map(int, input().split()))
a_sort = sorted(a)
print(a_sort)
ans = []
for i in range(len(a)):
    ans.append(bisect.bisect_left(a_sort, a[i]))
print(ans)


