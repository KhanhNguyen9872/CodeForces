/*
    https://codeforces.com/problemset/submission/4/225039976
    GNU C++17 - 30 ms -	0 KB
*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int w;
    cin >> w;
    if ((w % 2 == 0) && (w > 2)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
