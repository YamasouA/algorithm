memo = []

def func(n):
    #
    if memo[n] != -1:
        return memo[n]
    #ベースケース
    if n == 0:
        return 0
    elif n == 1:
        return 0
    elif n == 2:
        return 1

    #再帰
    memo[n] = func(n-1) + func(n-2) + func(n-3)
    
    return memo[n]

    
if __name__ == '__main__':
    n = int(input())
    memo = [-1] * (n+1)
    print(func(n))