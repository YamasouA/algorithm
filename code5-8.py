def chmin(a, b):
    if a > b:
        a = b
    return a

if __name__ == '__main__':
    s, t = input().split()
    dp = [[1000000000 for _ in range(len(t)+1)] for _ in range(len(s)+1)]

    #初期条件
    dp[0][0] = 0

    for i in range(len(s)+1):
        for j in range(len(t)+1):
            #変更操作
            if (i > 0) and (j > 0):
                if s[i-1] == t[j-1]:
                    dp[i][j] = chmin(dp[i][j], dp[i-1][j-1])
                else:
                    dp[i][j] = chmin(dp[i][j], dp[i-1][j-1]+1)

            #削除操作
            if i > 0:
                dp[i][j] = chmin(dp[i][j], dp[i-1][j]+1)
            
            #挿入操作
            if j > 0:
                dp[i][j] = chmin(dp[i][j], dp[i][j-1]+1)
    
    print(dp[len(s)][len(t)])