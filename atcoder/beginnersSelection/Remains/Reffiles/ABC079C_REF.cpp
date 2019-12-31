#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cstring>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <bitset>
#include <numeric>
#include <utility>
#include <iomanip>
#include <algorithm>
#include <functional>
using namespace std;

#define COUT(x) cout << #x << " = " << (x) << " (L" << __LINE__ << ")" << endl
#define EACH(i, s) for (__typeof__((s).begin()) i = (s).begin(); i != (s).end(); ++i)

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
template<class T1, class T2> ostream& operator << (ostream &s, pair<T1,T2> P)
{ return s << '<' << P.first << ", " << P.second << '>'; }
template<class T> ostream& operator << (ostream &s, vector<T> P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }
template<class T> ostream& operator << (ostream &s, vector<vector<T> > P)
{ for (int i = 0; i < P.size(); ++i) { s << endl << P[i]; } return s << endl; }
template<class T1, class T2> ostream& operator << (ostream &s, map<T1,T2> P)
{ EACH(it, P) { s << "<" << it->first << "->" << it->second << "> "; } return s << endl; }





string str;

void solve() {
  for (int bit = 0; bit < 8; ++bit) {
	int tmp = (int)(str[0] - '0');
	for (int i = 0; i < 3; ++i) {
	  if (bit & (1<<i)) tmp += (int)(str[i+1] - '0');
	  else tmp -= (int)(str[i+1] - '0');
	}
	if (tmp == 7) {
	  cout << str[0];
	  for (int i = 0; i < 3; ++i) {
		if (bit & (1<<i)) cout << '+';
		else cout << '-';
		cout << str[i+1];
	  }
	  cout << "=7" << endl;
	  return;
	}
  }
}


int main() {
  while (cin >> str) {
	solve();
  }
}
