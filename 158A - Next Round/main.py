# https://codeforces.com/problemset/submission/158/225645950
# Python 3.8.10 - 92 ms - 0 KB

def nextround() -> int:
    n, k = map(int, input().split())
    if n < k:
        return 0
    player = list(map(int, input().split()))
    total = 0
    for i in player:
        if i >= player[k - 1] and i > 0:
            total += 1        
    
    return total


if __name__ == '__main__':
    print(nextround())