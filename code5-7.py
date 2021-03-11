def chmax(a, b):
    if a < b:
        a = b
    return a

if __name__ == '__main__':
    n, w = map(int, input().split())
    value = []
    weight = []
    for i in range(n):
        vi = int(input())
        wi = int(input())
        value.append(vi)
        weight.append(wi)
    
    dp = [[0 for _ in range(n+1)] for i in range(w+1)]

    for i in range(n):
        for j in range(w):
            #i番目を選ぶ
            if j-weight[i] >= 0:
                dp[i+1][j] = chmax(dp[i+1][j], dp[i][j-weight[i]] + value[i])
            
            #i番目を選ばない
            chmax(dp[i+1][j], dp[i][j])
    print(dp[n][w])
