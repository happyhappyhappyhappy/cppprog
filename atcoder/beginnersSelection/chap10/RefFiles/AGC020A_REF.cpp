#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <sstream>
#include <cstring>
#include <queue>
#include <map>
using namespace std;
// Ref https://atcoder.jp/contests/agc020/submissions/2171282
int N, A, B;
int main() {
  while (cin >> N >> A >> B) {
	if (abs(A-B) % 2 == 0) cout << "Alice" << endl;
	else cout << "Borys" << endl;
  }
}