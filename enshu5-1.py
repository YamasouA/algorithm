N = int(input())
lst = []
for i in range(N):
    a, b, c = map(int, input().split())
    lst.append((a, b, c))

dp = [[0] * N, [0] * N, [0] * N]

for i, (a, b, c) in enumerate(lst):
    if i == 0:
        dp[0][0] = a
        dp[1][0] = b
        dp[2][0] = c

    else:
        a_ob = dp[0][i-1]
        b_ob = dp[1][i-1]
        c_ob = dp[2][i-1]
        dp[0][i] = max(b_ob + a, c_ob + a)
        dp[1][i] = max(a_ob + b, c_ob + b)
        dp[2][i] = max(a_ob + c, b_ob + c)

print(max(dp[0][-1], dp[1][-1], dp[2][-1]]))