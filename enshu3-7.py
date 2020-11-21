a = input()
n = len(a)
res = 0

for bit in range(1 << (n-1)):
    #+と+の間を表す変数
    tmp = 0
    for i in range(n-1):
        tmp *= 10
        tmp += int(a[i])

        #+を挿入するとき答えにtmpを加算しtmp=0とする
        if (bit & (1<<i)):
            res += tmp
            tmp = 0

    #最後の+以降を計算
    tmp *= 10
    #最後の値を取り出す
    tmp += int(a[-1])
    res += tmp
print(res)

