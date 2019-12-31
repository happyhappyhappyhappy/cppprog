#include<iostream>
#include<algorithm>

using namespace std;

// Problem https://atcoder.jp/contests/arc094/tasks/arc094_a


// 戦略 下限はまず全部の数字の一番大きいところを目標とすれば良い。
//      (理由 両方の操作も足すだけで引くことが出来ない)
//      また、両方とも合計2を足すため偶数値しか増やせない
//      一番大きな数字と残り二つの差の、和が偶数であれば単純にそれを2で割る
//      もし奇数であれば、下限+1をターゲットとすれば全部の数字との差が偶数になる
int solver(int A,int B,int C){
    int result;
    result=0;
    int lower_limit;
    lower_limit = max(A,max(B,C));
    int remainN;
    remainN = (lower_limit-A)+(lower_limit-B)+(lower_limit-C);
    if(remainN % 2 == 0){ // 埋める値が偶数の時
        result = remainN / 2;
    }
    else{// 埋める値が奇数になったとき -> lower_limitに1加えて再計算
        remainN = ((lower_limit+1)-A)+((lower_limit+1)-B)+((lower_limit+1)-C);
        result = remainN / 2;
    }
    return result;
}

int main(void){
    int answer;
    answer=0;
    int A,B,C;
    cin >> A >> B >> C;
    answer = solver(A,B,C);
    cout << answer << endl;
}