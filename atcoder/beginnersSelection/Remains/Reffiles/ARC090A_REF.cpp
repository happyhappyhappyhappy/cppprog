#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<map>
#include<set>
#include<list>
#include<iomanip>
#include<vector>
#include<functional>
#include<algorithm>
#include<cstdio>
#include<random>
#include<ctime>
#include<cstdlib>
#include<unordered_map>
#include<string.h>
#include<iostream>
using namespace std;

int a[100], b[100];
signed main() {
	int n; cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j <= i; j++) {
			sum += a[j];
		}
		for (int j = i; j < n; j++) {
			sum += b[j];
		}
		ans = max(ans, sum);
	}
	cout << ans << endl;
}

	
