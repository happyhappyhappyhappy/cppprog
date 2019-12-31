#include <iostream>
using namespace std;
// From https://atcoder.jp/contests/agc010/submissions/4654382
int main() {
    int N; cin >> N;
    int oddnum = 0;
    for (int i = 0; i < N; ++i) {
        int a; cin >> a;
        if (a % 2 == 1) ++oddnum;
    }
    if (oddnum % 2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}
