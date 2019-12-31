#include<iostream>
#include<vector>
#include<string>
using namespace std;

// Problem https://atcoder.jp/contests/abc071/tasks/abc071_b

// 26と限定されているのでバケット法を使う
// 要文字コード
char solver(string inputString){
    char result;
    int resultInt;
    vector<int> charCount(26,0);
    for(int j=0;j<inputString.size();j++){
        charCount.at(inputString.at(j)-97)=charCount.at(inputString.at(j)-97)+1;
    }
    // 結果判定
    bool allCheckFlg = true;
    for(int j=0;j<26;j++){
        if(charCount.at(j)==0){
            allCheckFlg = false;
            resultInt = j;
            break;
        }
    }

    if(allCheckFlg){
        result = 'X';
    }
    else{
        result = resultInt + 97;
    }
    return result;
}

int main(void){
    char answer;
    string S;
    cin >> S ;
    answer = solver(S);
    if(answer == 'X'){
        cout << "None" << endl;
        return 0;
    }
    cout << answer << endl;
    return 0;
}
