#include<iostream>
#include<vector>
using namespace std;
// Problem https://atcoder.jp/contests/abc125/tasks/abc125_c
// Reference http://drken1215.hatenablog.com/entry/2019/04/27/224100_1

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }

int GCD(int a,int b){
   //  cout << a << "," << b << endl;
   // return (b!=0)?GCD(b,a%b):a;
    return b ? GCD(b, a%b) : a;
    // もしbが0以外であれば再帰(b,a%b) bが0であればaを返す
}

int main(void){
    int N,answer;
    cin >> N ;
    vector<int> a(N);
    for(int i=0;i<N;++i){
        cin >> a[i];
    }
/** 配列の出力法確認
 *     for(int i=0;i<allNumber;i++){
        cout << numbers[i] << ",";
    } 
    cout << endl;
    **/
    /** GCDチェック 
     * int TestGCD = GCD(72,18);
    cout << "GCDTEST:" << TestGCD << endl;
    TestGCD = GCD(0,100);
    cout << "GCDTEST2:" << TestGCD << endl; 
    **/
    vector<int> left(N+1,0); // 左側からの累積GCD配列
    vector<int> right(N+1,0); // 右側からの累積GCD配列
    // 左からの累積GCD
    for(int i=0;i<N;++i){
            left[i+1]=GCD(left[i],a[i]);
    }
    // 右からの累積GCD
    for(int i=N-1;i>=0;--i){
        cout << "right.[i] is :"<< i << endl;
        right[i]=GCD(right[i+1],a[i]);
    }
    answer = 0;
    for(int i=0;i<N;++i){
        int l = left[i];
        int r = right[i+1];
        chmax(answer,GCD(l,r));      
    }       
    cout << answer << endl;
}