/*
    https://codeforces.com/problemset/submission/158/225649803
    GNU G++17 7.3.0 - 30 ms - 0 KB
*/

#include<iostream>
using namespace std;

int nextround(int n, int k) {
    if (n<k) {
        return 0;
    }
    int a[n];
    int total = 0;

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    for(int i=0; i<n; i++) {
        if((a[i] >= a[k - 1]) && (a[i] > 0)) {
            total++;
        }
    }

    return total;
}

int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n;
    cin >> k;
    getchar();
    cout << nextround(n, k);
    return 0;
}
