def func(i, w, a):
    if (i==0):
        if (w==0):
            return True
        else:
            return False
    #a[i-1]を選ばない
    if (func(i-1, w, a)):
        return True
    
    #a[i-1]を選ぶ
    if (func(i-1, w-a[i-1], a)):
        return True

    return False


if __name__ == "__main__":
    n, w = map(int, input().split())
    a = []
    for i in range(n):
        ai = int(input())
        a.append(ai)
    
    if (func(n, w, a)):
        print("Yes")
    else:
        print("No")