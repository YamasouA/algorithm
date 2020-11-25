def chmin(a, b):
    if a > b:
        a = b
    return a

if __name__ =='__main__':
    n = int(input())
    h = list(map(int, input().split()))

    dp = [10000000 for _ in range(n)]
    dp[0] = 0

    for i in range(n):
        if (i+1 < n):
            dp[i+1] = chmin(dp[i+1], dp[i] + abs(h[i]-h[i+1]))
        if (i+2 < n):
            dp[i+2] = chmin(dp[i+2], dp[i] + abs(h[i]-h[i+2]))
    print(dp[n-1])