/*
    https://codeforces.com/problemset/submission/231/225193893
    GNU C11 - 30 ms - 12 KB
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int a,b,c;
    int answer = 0;
    scanf("%d", &n);
    getchar();
    for(int i=0; i<n; i++) {
        scanf("%d %d %d", &a, &b, &c);
        if(a == 1) {
            if(b == 1) {
                answer++;
            } else if (c == 1) {
                answer++;
            }
        } else if (b == 1) {
            if (c == 1) {
                answer++;
            }
        } 
    }

    printf("%d", answer);
    return 0;
}
