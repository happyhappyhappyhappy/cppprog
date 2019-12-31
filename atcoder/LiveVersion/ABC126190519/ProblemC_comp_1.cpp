#include<iostream>
#include<iomanip> // 出力桁数の調整
using namespace std;

// Problem https://atcoder.jp/contests/abc126/tasks/abc126_c
// Reference1 http://drken1215.hatenablog.com/entry/2019/05/19/224500_2 桁数の調整
// Reference2 https://img.atcoder.jp/abc126/editorial.pdf 処理そのものの単純化
// 基礎はRefe2 これは 整数型 int 出力/入力に scanf,printfを利用していたのでその箇所を
// Refere1に対応した物

int main(void){
    double answer;
    long long N,K;
    answer = 0.0;
    cin >> N >> K ;
    for(long long j=1 ; j <= N ; j++)
    {
        double tmp;
        long long nowC;
        tmp = 1.0/N;
        nowC = j;
        while(nowC<K){
            nowC = nowC * 2;
            tmp = tmp / 2.0;
        }
        answer = answer+tmp;
    }
        
    cout << fixed << setprecision(10) << answer << endl;
    return 0;
}

