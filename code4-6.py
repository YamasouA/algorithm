def fibo(n):
    print("fibo {} を呼び出しました".format(n))

    #ベースケース
    if (n == 0):
        return 0
    if (n == 1):
        return 1

    result = fibo(n-1) + fibo(n-2)
    print("{} 項目＝{}".format(n, result))
    return result

if __name__ == "__main__":
    fibo(6)