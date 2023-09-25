/*
    https://codeforces.com/problemset/submission/71/225064099
    GNU C++17 - 15 ms - 0 KB
*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int size;
    cin >> size;

    for(int i=0; i<size; i++) {
        string s;
        cin >> s;
        if(s.length() > 10) {
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << "\n";
        } else {
            cout << s << "\n";
        }

    }

    return 0;
}
