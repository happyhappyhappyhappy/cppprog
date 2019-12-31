#include<iostream>
#include<vector>
using namespace std;
// Problem https://atcoder.jp/contests/abc125/tasks/abc125_c
// Reference http://drken1215.hatenablog.com/entry/2019/04/27/224100_1
// ABC125C_1の改訂版。ひとまずvector[i]->vector.at(i)に置換

int GCD(int a,int b){
    if(b != 0){
        int c = a%b;
        return GCD(b,c);
    }
    return a;
}

int solver(int allNumber,vector<int> numbers){
    /** 配列の出力法確認 
     for(int j=0;j<allNumber;j++){
        cout << numbers.at(j) << ",";
    } 
    cout << endl; **/
    /** GCDチェック 
    int TestGCD = GCD(72,18);
    cout << "GCDTEST1:" << TestGCD << endl;
    TestGCD = GCD(0,100);
    cout << "GCDTEST2:" << TestGCD << endl; 
    **/
    vector<int> left(allNumber+1,0); // 左側からの累積GCD配列
    vector<int> right(allNumber+1,0); // 右側からの累積GCD配列
    // 左からの累積GCD
    for(int i=0;i<allNumber;i++){
            left.at(i+1)=GCD(left.at(i),numbers.at(i));
    }
    // 右からの累積GCD
    for(int i=allNumber-1;i>=0;i--){
// 誤り for(int i = allNumber;allNumber>=0;i++) -> 無限ループ        
       // 誤り right.at(i)=GCD(right.at(i+i),numbers.at(i)); -> Typo i+iでは範囲外の配列へのアクセスを試みる
       // vector[i+i] では 適当な値を拾ってきて、エラーが出ない
       right.at(i)=GCD(right.at(i+1),numbers.at(i));
    }
    /**for(int j=0;j<=allNumber;j++){
        cout << "j:" << left.at(j) << " " << right.at(j) << endl;
    }**/
    int answer = 0;
    for(int i=0;i<allNumber;++i){
        int l = left[i];
        int r = right[i+1];
        int tmp;
        tmp = GCD(l,r);
        if(answer < tmp){
            answer=tmp;
        }      
    } 
    return answer; 
}

int main(void){
    int N,answer;
    cin >> N ;
    vector<int> A(N);
    for(int i=0;i<N;++i){
        cin >> A.at(i);
    }
    answer = solver(N,A);
    cout << answer << endl;
    return 0;
}