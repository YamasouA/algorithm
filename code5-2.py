def chmin(a, b):
    if a > b:
        a = b
    return a

if __name__ == '__main__':
    n = int(input())
    h = list(map(int, input().split()))

    dp = [100000000 for _ in range(n)]
    dp[0] = 0

    for i in range(1, n):
        dp[i] = chmin(dp[i], dp[i-1] + abs(h[i]-h[i-1]))
        if i > 1:
            dp[i] = chmin(dp[i], dp[i-2] + abs(h[i]-h[i-2]))

    print(dp[n-1])