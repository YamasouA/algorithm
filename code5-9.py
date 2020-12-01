def chmin(a, b):
    if a > b:
        a = b
    return a

if __name__ == '__main__':
    n = int(input())
    c = [[-1 for _ in range(n+1)] for _ in range(n+1)]
    for i in range(n+1):
        for j in range(n+1):
            c[i][j] = int(input())

    dp = [10000000 for _ in range(n+1)]

    dp[0] = 0

    for i in range(n+1):
        for j in range(i):
            dp[i] = chmin(dp[i], dp[j] + c[i][j])
    print(dp)
    print(dp[n])