def main():
    s = input()
    max_k = len(s)
    min_upto = []
    min_letter = "z"
    for i, letter  in enumerate(s):
        min_letter = min(min_letter, s[i])
        min_upto.append(min_letter)
    min_letter = min_upto[max_k-1]

    for i in range(max_k):
        if s[i] == min_letter or i == 0:
            print("Mike")
        else:
            if min_upto[i-1] < s[i]:
                print("Ann")
            else:
                print("Mike")

if __name__ == "__main__":
    main()
