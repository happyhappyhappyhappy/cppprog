#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// Problem https://atcoder.jp/contests/abc059/tasks/arc072_a
// Reference https://atcoder.jp/contests/arc072/submissions/2161263
// comment 最初の a[0] を正か負かを決めると芋づる式に決まります
// comment from https://qiita.com/drken/items/fd4e5e3630d0f5859067#%E7%AC%AC-9-%E5%95%8F--abc-049-c---daydream-300-%E7%82%B9

// 今までの合計が正になるように修正するコスト
long long plusCost(long long &sum){
    long long cost;
    cost = 0;
    if(sum >= 1){
        cost = 0; // 今までの合計が正ならば敢えて修正する必要は無い
    }
    else{   
        // sumが-Xなので+1に
        cost = abs(sum); // まず0にするのに必要なコスト
        cost = cost + 1; // +1にするのに必要なコスト
        sum = +1; // これで与えた変数そのものも+1にできる  
    }
    return cost;
}

// 今までの合計が負になるように修正するコスト
long long minusCost(long long &sum){
    long long cost;
    if(sum <= -1){ // sumがすでに負の数なので操作する必要は無い
        cost = 0;  
    }
    else
    {
        cost = (sum - 0) + 1; // sumが正の数ならばまず0に戻すコストその上に-1にするコストが必要 
        sum = -1;
    }
    return cost;
}


// 最初の和を正に取った場合の計算
long long plusSolver(int N,vector<long long> Ai){
    long long result = 0;
    long long  sum;
    sum = Ai[0];
    result = plusCost(sum);
    for(int j=1;j<N;j++){
        int guki=j%2;
        sum = sum + Ai.at(j);
        if(guki == 1){
            // 奇数番目は合計が負の数になる
            result = result + minusCost(sum);
        }
        else
        {
            // 偶数番目は合計が正の数になるようにする
            result = result + plusCost(sum);
        }
    }
    return result;
}

// 最初の数を負にした場合の計算
long long minusSolver(int N,vector<long long> Ai){
    long long result = 0;
    long long  sum;
    sum = Ai[0];
    result = minusCost(sum);
    for(int j=1;j<N;j++){
        int guki=j%2;
        sum = sum + Ai.at(j);
        if(guki == 1){
            // 奇数番目は合計が正の数になる
            result = result + plusCost(sum);
        }
        else
        {
            // 偶数番目は合計が負の数になるようにする
            result = result + minusCost(sum);
        }
    }
    return result;
}

int main(void){
    long long answer;
    int N;
    cin >> N ;
    vector<long long> Ai(N);
    for(int j=0;j<N;j++){
        cin >> Ai.at(j);
    }
    long long plusAns=0;
    long long minusAns=0;
    plusAns = plusSolver(N,Ai);
    minusAns = minusSolver(N,Ai);
    answer = min(plusAns,minusAns);
    cout << answer << endl;
    return 0;
}