def main():
    x = input()
    y = input()
    z = ""
    for i in range(0, len(x)):
         
        if (ord(x[i]) - ord(y[i])) < 0:
            print(-1)
            return
        else:
            z += y[i]
    print(z)


if __name__ == "__main__":
    main()

