/*
    https://codeforces.com/problemset/submission/71/225063483
    GNU C11 - 15 ms - 0 KB
*/

#include<stdio.h>
#include <string.h>
#define MAX 500

int main(int argc, char const *argv[])
{
    char string[MAX];
    int size;
    scanf("%d", &size);
    getchar();
    for(int i=0; i<size; i++) {
        fgets(string, MAX, stdin);
        string[strcspn(string, "\n")] = 0; // remove \n in string
        if (strlen(string) > 10) {
            printf("%c%d%c\n",string[0], strlen(string)-2, string[strlen(string)-1]);
        } else {
            printf("%s\n", string);
        }
    }
    return 0;
}
