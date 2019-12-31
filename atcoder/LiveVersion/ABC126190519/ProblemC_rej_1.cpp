#include<iostream>
#include<vector>
#include<iomanip> // 出力桁数の調整
using namespace std;

// Problem https://atcoder.jp/contests/abc126/tasks/abc126_c
// Reference http://drken1215.hatenablog.com/entry/2019/05/19/224500_2 桁数の調整
// が、ややこしくして爆死した例

double solver(long long face,long long winC){
    
    double result=0.0;
    double faceP = 1.0/2.0;
    vector<long long> contC(face,0);
    vector<double> pval(face,1.0);   
    for(long long j=1;j<=face;j++){
        long long nowNum;
        long long counter;
        nowNum = j;
        counter = 0;
        // cout << nowNum << " " << winC << endl;
        while(nowNum <= winC ){
    //        cout << nowNum << endl;
            nowNum = nowNum * 2;
            counter = counter + 1;
        }
        contC.at(j-1)=counter;
    }
    for(long long j=0;j<face;j++){
        double eachP;
        eachP = 1.0;
        for(int k=0;k<contC.at(j);k++){
            eachP = eachP / 2.0;
        }
        pval.at(j)=eachP;
    }
    /**
     *   残処理 pvalを全部足す vector型でsumはあったろうか？
     *   faceで割る
     **/
    double sumPval;
    sumPval = 0.0000000000;
    for(int j=0;j<face;j++){
        sumPval = sumPval + pval.at(j);
    }
 //   cout << "sumPval:" << sumPval << endl;


    result = sumPval/face;
    return result;
}

int main(void){
    double answer;
    long long N,K;
    cin >> N >> K ;
    answer = solver(N,K);
    cout << fixed << setprecision(10) << answer << endl;
    return 0;
}

