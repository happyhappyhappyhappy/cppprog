#include<iostream>
#include<algorithm>
using namespace std;

// Problem https://atcoder.jp/contests/arc094/tasks/arc094_a
// Reference1 https://atcoder.jp/contests/abc093/submissions/2359516
// Reference2 https://atcoder.jp/contests/arc094/submissions/2403322
// Comment: 今度は不変量に着目します
// CommentRef:https://qiita.com/drken/items/fd4e5e3630d0f5859067#%E7%AC%AC-10-%E5%95%8F--abc-086-c---traveling-300-%E7%82%B9

int solver(int A,int B,int C){
    int result=0;
    int maxValue=0;
    // 下限の候補となる3つの数の最大値を求める
    maxValue=max(A,max(B,C));
    int coverValue;
    // 下限まで埋め合わせるのに必要な値
    coverValue=maxValue*3-(A+B+C);
    // 一度に埋め合わせ可能な値は2(偶数)しかないのでもし埋め合わせ数が奇数ならば
    // 下限をmaxValue+1とする
    if(coverValue % 2 == 1){
        coverValue=((maxValue+1)*3)-(A+B+C);
    }
    result = coverValue/2;
    return result;
}

int main(void){
    int A,B,C;
    int answer=0;
    cin >> A >> B >> C;
    answer = solver(A,B,C);
    cout << answer << endl;
    return 0;
}