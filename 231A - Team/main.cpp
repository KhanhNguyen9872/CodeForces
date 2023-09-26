/*
    https://codeforces.com/problemset/submission/231/225194083
    GNU C++17 - 30 ms - 4 KB
*/

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int a, b, c;
    int answer=0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a;
        cin >> b;
        cin >> c;
        if(a == 1) {
            if ((b == 1)||(c == 1)) answer++;
        } else {
            if (b == 1) {
                if (c == 1) {
                    answer++;
                }
            }
        }
    }
    cout << answer;
    return 0;
}
