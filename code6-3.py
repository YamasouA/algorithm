if __name__ == "__main__":
    print("start game!")

    left, right = 20, 36

    while (right - left > 1):
        mid = int(left + (right - left) / 2)

        print("Is the age less than {} ? (yes/no)".format(mid))
        ans = input()

        if ans == "yes":
            right = mid
        else:
            left = mid
    print("The age is {} !".format(left))