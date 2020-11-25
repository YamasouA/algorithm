if __name__ == '__main__':
    n = int(input())
    h = []
    for i in range(n):
        hi = int(input())
        h.append(hi)

    dp = [100000000 for _ in range(n)]
    dp[0] = 0

    for i in range(1, n):
        if i == 1:
            dp[i] = abs(h[i] - h[i-1])
        else:
            dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]), dp[i-2] + abs(h[i] - h[i-2]))
    print(dp[n-1])