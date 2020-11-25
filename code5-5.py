INF = 100000000
h = []
dp = []
def chmin(a, b):
    if a > b:
        a = b
    return a

def rec(i):
    #すでにdpが更新されていればリターン
    if (dp[i] < INF):
        return dp[i]

    if i == 0:
        return 0

    res = INF

    #足場i-1からくる
    res = chmin(res, rec(i-1)+abs(h[i]-h[i-1]))

    #足場i-2からくる
    if i > 1:
        res = chmin(res, rec(i-2)+abs(h[i]-h[i-2]))
    
    dp[i] = res
    return res

if __name__ == "__main__":
    n = int(input())
    for i in range(n):
        hi = int(input())
        h.append(hi)
    dp = [INF for _ in range(n)]
    

    print(rec(n-1))