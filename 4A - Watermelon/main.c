/*
    https://codeforces.com/problemset/submission/4/225039613
    GNU C11 - 60 ms	- 8 KB
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int w;
    scanf("%d", &w);
    if ((w % 2 == 0) && (w > 2)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
