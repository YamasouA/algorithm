import math
def calc_dist(x1, y1, x2, y2):
    return math.sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2))


if __name__ == '__main__':
    n = int(input())
    x = []
    y = []
    for i in range(n):
        xi = int(input())
        yi = int(input())
        x.append(xi)
        y.append(yi)

    minimum_dist = 10000000

    for i in range(n):
        for j in range(i+1, n, 1):
            dist_i_j = calc_dist(x[i], y[i], x[j], y[j])

            if (dist_i_j < minimum_dist):
                minimum_dist = dist_i_j

    print(minimum_dist)