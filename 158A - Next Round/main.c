/*
    https://codeforces.com/problemset/submission/158/225649007
    GNU C11 5.1.0 - 60 ms - 0 KB
*/

#include<stdio.h>

int nextround(int n, int k, int a[]) {
    int total = 0;
    if (n < k) {
        return 0;
    }
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    for(int i=0;i<n;i++) {
        if ((a[i] >= a[k - 1]) && (a[i] > 0)) {
            total++;
        }
    }

    return total;
}

int main(int argc, char const *argv[])
{
    int n, k, total = 0;
    scanf("%d %d",&n, &k);
    getchar();
    int a[n];
    printf("%d", nextround(n, k, a));
    return 0;
}
