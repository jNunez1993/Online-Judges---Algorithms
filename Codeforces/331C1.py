def main():
    num = int(input())
    subs = 0
    while num != 0:
        mx = 0
        n = 0
        str_num = str(num)
        for i in range(0, len(str_num)):
            n = max(n, int(str_num[i]))
        num = int(str_num) - n
        subs+=1
    print(subs)


if __name__ == "__main__":
    main()
