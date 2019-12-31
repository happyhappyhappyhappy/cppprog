#include<iostream>
#include<vector>
#include<cmath>
using namespace std;



// Problem https://atcoder.jp/contests/arc089/tasks/arc089_a
// Ref https://qiita.com/drken/items/fd4e5e3630d0f5859067#%E7%AC%AC-10-%E5%95%8F--abc-086-c---traveling-300-%E7%82%B9
//     https://atcoder.jp/contests/arc089/submissions/2005254


// ところでlongの適応範囲はどれくらいか->2^32保証、signedは適用出来るのか->無理して使わない
// もしかしたら100010ならばintが使えるかもしれないのか->使えるが32bit以上前提
bool solver(long visitPosition,vector<long> t,vector<long> x,vector<long> y){
    bool result;
    result = true;
    /**  for(long j=0;j<=visitPosition;j++)
    {
        cout << t.at(j) << " " << x.at(j) << " " << y.at(j) << endl;
    }**/
    for(long j=1;j<=visitPosition;j++){
        // (1) 距離が適当か
        long int dist=0;
        long int timelag=0;
        dist=abs(x.at(j)-x.at(j-1))+abs(y.at(j)-y.at(j-1));
        timelag=t.at(j)-t.at(j-1);
        if(timelag < dist){
            result=false;
            break;
        }
        // EOO = EvenOrOdd 偶数か奇数か
        // 偶数時間後には偶数位置へ移動、奇数時間後には貴数時間後に移動していなければならない
        int distEOO=0;
        int timelagEOO=0;
        distEOO = dist % 2;
        timelagEOO = timelag % 2;
        if(distEOO != timelagEOO){ // 偶数奇数が1カ所でも異なっていたらNG
            result=false;
            break;
        }
        // それ以外なら継続。最後まで行ったら最初に定義したtrueで終了
    }
    
    return result;
}

int main(void){
    long N;
    bool answer=true;
    cin >> N;
    vector<long> xi(100010,0);
    vector<long> yi(100010,0);
    vector<long> ti(100010,0);
    for(int j=0;j<N;j++){
        cin >> ti.at(j+1) >> xi.at(j+1) >> yi.at(j+1);
    }
    answer = solver(N,ti,xi,yi);
    if(answer){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}
