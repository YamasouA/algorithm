def func(n):
    print("func{}を呼び出しました".format(n))

    if (n == 0):
        return 0

    result = n + func(n-1)
    print(n, "までの和= ", result)

    return result

if __name__ == '__main__':
    func(5)