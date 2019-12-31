#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int intCeil10(int cooktime){
    int x;
    int ceilTime;
    x = cooktime % 10;
    if( x != 0)
        {ceilTime = 10 - x;}
    else{ceilTime = 0;}
    return cooktime+ceilTime;
}

int main(void){
    vector<int> A(5);
    vector<int> P = {0,1,2,3,4};
    const int INF = 123456789;
    int minDish = INF;
    cin >> A[0] >> A[1] >> A[2] >> A[3] >> A[4];
/**    for(int i = 0; i < A.size(); i++)
    {
        cout << A[i] << endl;
    }**/
    sort(A.begin(),A.end());
    do
    {
        int first,second,third,forth,fifth;
        first = intCeil10(A[0]);
        second = intCeil10(A[1]);
        third = intCeil10(A[2]);
        forth = intCeil10(A[3]);
        fifth = A[4];
        alltime = first+second+third+forth+fifth;
        // 現在のmintimeと比較しもしそれより小さければこれを替わりに入れる
    } while(next_permutation(A.begin(),A.end()));

/**    for(int i = 0; i < A.size(); i++)
    {
        cout << "i=" << intCeil10(A[i]) << endl;
    }**/

    return 0;
}