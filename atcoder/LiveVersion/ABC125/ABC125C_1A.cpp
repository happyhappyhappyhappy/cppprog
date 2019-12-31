#include<iostream>
#include<vector>
using namespace std;
// Problem https://atcoder.jp/contests/abc125/tasks/abc125_c
// Reference http://drken1215.hatenablog.com/entry/2019/04/27/224100_1
// を参照しながら編集したが testcase07,08,12でWAとなるのでチェックさせて頂きました
#include <iostream>
#include <vector>
using namespace std;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }

int GCD(int a, int b) { return b ? GCD(b, a%b) : a; }

int main() {
    int N; cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    // 累積 GCD (左と右両方)
    vector<int> left(N+1, 0), right(N+1, 0);
    for (int i = 0; i < N; ++i) left[i+1] = GCD(left[i], a[i]);
    for (int i = N-1; i >= 0; --i) right[i] = GCD(right[i+1], a[i]);
    
    // 集計
    int res = 0;
    for (int i = 0; i < N; ++i) {
        // 左側
        int l = left[i];

        // 右側
        int r = right[i+1];

        // 更新
        chmax(res, GCD(l, r));
    }
    cout << res << endl;
}