# https://codeforces.com/problemset/submission/231/225193614
# Python3.8.10 - 92 ms - 0 KB

answer = 0
for _ in range(int(input())):
    m = input().split()
    if (len([str(x) for x in m if str(x)=="1"]) > 1):
        answer += 1

print(answer)