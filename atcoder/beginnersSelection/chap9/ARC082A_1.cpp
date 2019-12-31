#include<iostream>
#include<vector>

using namespace std;
#define COUT(x) cout << #x << " = " << (x) << " (L" << __LINE__ << ")" << endl

// Problem https://atcoder.jp/contests/abc072/tasks/arc082_a
// Reference https://atcoder.jp/contests/arc082/submissions/1688401
// comment X を決めると Greedy にすべて決まります
// comment from https://qiita.com/drken/items/fd4e5e3630d0f5859067#%E7%AC%AC-9-%E5%95%8F--abc-049-c---daydream-300-%E7%82%B9

int solver(int allNum,vector<int> elem){
    int result=0;
    static int maxSize=100000;
    vector<int> box(maxSize+1,0);
    for(int j=0;j<elem.size();j++){
        int inbox;
        inbox=elem.at(j);
        box.at(inbox)++;
    }
    for(int j=1;j<maxSize;j++){
        int xsum;
        xsum=box.at(j-1)+box.at(j)+box.at(j+1);
        if(result<xsum){
            result=xsum;
        }
    }
    return result;
}


int main(void){
    int answer=0;
    int N;
    cin >> N;
    vector<int> Ai(N);

    for(int j=0;j<N;j++){
        cin >> Ai.at(j);
    }
    answer = solver(N,Ai);


    cout << answer << endl;
}