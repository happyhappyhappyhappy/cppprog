#include<iostream>
#include<string>
using namespace std;

// https://atcoder.jp/contests/abc090/tasks/abc090_b
bool parindromic(int N){
// stol使う https://ja.cppreference.com/w/cpp/string/basic_string/stol
    int Ncopy,parInt;
    Ncopy = N;
    bool result=true;
    string parStr="";
    while(N > 0){
        int modN;
        modN = N % 10;
        parStr = parStr.append(to_string(modN));
        N = N / 10;
    }
    parInt = stol(parStr);
    // cout << parInt << "=?" << Ncopy << endl;
    if(Ncopy != parInt){
        result = false;
    }
    return result;
}


int solver(int nFr,int nTo){
    int result=0;
    // cout << nFr << " To " << nTo << endl;
    for(int j=nFr;j<= nTo;j++){
        bool pariCheck;
        pariCheck = parindromic(j);
        if(pariCheck){
            // cout << j << " is Parindric" << endl;
            result = result+1;
        }
    }
    return result;
}

int main(void){
    int answer=0;
    int A,B;
    cin >> A >> B ;
    answer  = solver(A,B);
    cout << answer << endl;
}