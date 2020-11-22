x = []
x.append(0)
x.append(1)
for i in range(2, 50):
    xi = x[i-1] + x[i-2]
    x.append(xi)
    print("{}項目: {}".format(i, x[i]))