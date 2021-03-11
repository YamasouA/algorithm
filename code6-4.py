import bisect

if __name__ == "__main__":
    n, k = map(int, input().split())
    a = []
    b = []
    for i in range(n):
        ai = int(input())
        bi = int(inpit())
        a.append(ai)
        b.append(bi)

    min_value = 2000000

    b.sort()

    for i in range(n):
        l = bisect_left(b, k-a[i])