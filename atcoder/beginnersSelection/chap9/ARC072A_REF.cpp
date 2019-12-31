#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <queue>
using namespace std;

int n;
long long a[210000];

long long add(long long &sum, bool plus) {
    if (plus) {
        if (sum >= 1) {
            cout << "sum is plus -> return 0" << endl;
            return 0;
            }

        else {
            long long res = abs(sum - 1);
            sum = 1;
            cout << "sum is minus -> change " << res << endl;
            return res;
        }
    }
    else {
        if (sum <= -1) {
            cout << "sum is minus -> return 0" << endl;
            return 0;
        }
        else {
            long long res = abs(sum + 1);
            cout << "sum is plus -> change " << res << endl;
            sum = -1;
            return res;
        }
    }
}

int main() {
    while (cin >> n) {
        cin >> a[0];
        long long psum = a[0], msum = a[0];
        long long plus = add(psum, true), minus = add(msum, false);
        for (int i = 1; i < n; ++i) {
            cin >> a[i];
            psum += a[i];
            msum += a[i];
            if (i & 1) {
                cout << i << " is odd." << endl;
                cout << "plus side " << psum << " is sum minus." << endl;
                plus += add(psum, false);
                cout << "minus side " << msum << " is sum plus " << endl;
                minus += add(msum, true);
            }
            else {
                cout << i << " is even." << endl;
                cout << "plus side " << psum << " is sum plus." << endl;
                plus += add(psum, true);
                cout << "plus side " << msum << " is sum minus." << endl;
                minus += add(msum, false);
            }
        }
        cout << "Result: to plus -> " << plus << " ." ;
        cout << "to minus -> " << minus << " ." << endl;
        cout << min(plus, minus) << endl;
    }
}



