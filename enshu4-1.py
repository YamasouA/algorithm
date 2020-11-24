def func(n):
    #ベースケース
    if n == 0:
        return 0
    elif n == 1:
        return 0
    elif n == 2:
        return 1

    #再帰
    result = func(n-1) + func(n-2) + func(n-3)
    
    return result

    
if __name__ == '__main__':
    n = int(input())
    print(func(n))