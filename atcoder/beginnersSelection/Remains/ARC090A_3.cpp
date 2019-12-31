#include<iostream>
#include<vector>

using namespace std;
// Problem https://atcoder.jp/contests/abc087/tasks/arc090_a

int solver(int CANDYSUM,vector<int> UPLINE,vector<int> DOWNLINE){
    int result=0;
    // 累積和の作成
    vector<int> accuUPLINE;
    vector<int> accuDOWNLINE;
    accuUPLINE.clear();
    accuDOWNLINE.clear();
    accuUPLINE.push_back(0);
    accuDOWNLINE.push_back(0);
    for(int j=0;j<CANDYSUM;j++){
        accuUPLINE.push_back(accuUPLINE.at(j)+UPLINE.at(j));
        accuDOWNLINE.push_back(accuDOWNLINE.at(j)+DOWNLINE.at(j));
    }
/**    cout << "accuU P LINE: "; 
    for(int j=0;j<=CANDYSUM;j++){
        cout << accuUPLINE.at(j) << " ";
    }
    cout << endl;
    cout << "accuDOWNLINE: "; 
    for(int j=0;j<=CANDYSUM;j++){
        cout << accuDOWNLINE.at(j) << " ";
    }
    cout << endl;**/
    
    for(int j=0;j<CANDYSUM;j++){
        int nowsum=0;
//        cout << "Select " << j << ":";
        nowsum = accuUPLINE.at(j+1)+accuDOWNLINE.at(CANDYSUM)-accuDOWNLINE.at(j);
//        cout << nowsum << endl;
        if(result < nowsum){
            result = nowsum;
        }
    }
    return result;
}


int main(void){
    int answer;
    answer = 0;
    int N;
    cin >> N;
    vector<int> A1;
    vector<int> A2;
    for(int j=0;j<N;j++){
        int candy=0;
        cin >> candy;
        A1.push_back(candy);
    }
    for(int j=0;j<N;j++){
        int candy=0;
        cin >> candy;
        A2.push_back(candy);
    }
    answer = solver(N,A1,A2);
    cout << answer << endl;
    return 0;
}