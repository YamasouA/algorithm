import bisect
n = int(input())
a = sorted(list(map(int, input().split())))
b = sorted(list(map(int, input().split())))
c = sorted(list(map(int, input().split())))


cnt = 0
for i in b:
    x = bisect.bisect_left(a, i)
    y = bisect.bisect_right(c, i)
    cnt += x * (n-y)

print(cnt)