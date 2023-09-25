# https://codeforces.com/problemset/submission/71/225060049
# Python3.8.10 - 46 ms - 0 KB

for i in range(int(input())):
    word = input()
    if len(word) > 10:
        print("{}{}{}".format(word[0], len(word)-2, word[-1]))
    else:
        print(word)