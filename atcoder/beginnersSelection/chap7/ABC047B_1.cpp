#include<iostream>
#include<vector>
using namespace std;
// Problem https://atcoder.jp/contests/abc047/tasks/abc047_b

int solver(int widthlong,int heightlong,vector<int> xpoint,vector<int> ypoint,vector<int> ppoint){
    int result = 0;
    vector<vector<int>> space;
/**     for(int j=0;j<xpoint.size();j++){
        cout << "X:" << xpoint.at(j) << " y:" << ypoint.at(j)  << " p:" << ppoint.at(j);
        cout << endl;
    }**/
    space = vector<vector<int>>(widthlong,vector<int>(heightlong,0));
/**     for(int x=0;x<=widthlong;x++){
        cout << x << ": ";
        for(int y=0;y<=heightlong;y++){
            cout << space.at(x).at(y) << " " ;
        }
        cout << endl;
    }**/
    for(int k=0;k<xpoint.size();k++){
        if(ppoint.at(k)==1){
            for(int x=0;x<xpoint.at(k);x++){
                for(int y=0;y<heightlong;y++){
                    space.at(x).at(y) = 1;
                }
            }
        }
       
        if(ppoint.at(k)==2){
            for(int x=xpoint.at(k);x<widthlong;x++){
                for(int y=0;y<heightlong;y++){
                    space.at(x).at(y)=1;
                }
            }
        }
         if(ppoint.at(k)==3){
            for(int x=0;x<widthlong;x++){
                for(int y=0;y<ypoint.at(k);y++){
                    space.at(x).at(y)=1;
                }
            }
        }
        if(ppoint.at(k)==4){
            for(int x=0;x<widthlong;x++){
                for(int y=ypoint.at(k);y<heightlong;y++){
                    space.at(x).at(y)=1;
                }
            }
        }
 /**        cout << k << " point try" << endl;
        for(int x=0;x<widthlong;x++){
            cout << x << ": ";
            for(int y=0;y<heightlong;y++){
                cout << space.at(x).at(y) << " " ;
            }
            cout << endl;
        }**/
    }
      for(int x=0;x<widthlong;x++){
        for(int y=0;y<heightlong;y++){
      //      cout << space.at(x).at(y) << " " ;
            if(space.at(x).at(y)==0){
                result=result+1;
            }
        }
       // cout << endl;
    }
    return result;
}

int main(void){
    // 基本データの取り出し
    int answer=-1;
    int W,H,N;
    cin >> W >> H >> N;
    // 塗り絵データの初期化
    vector<int> xi(N,0);
    vector<int> yi(N,0);
    vector<int> ai(N,0);
    for(int j=0;j<N;j++){
        cin >> xi.at(j) >> yi.at(j) >> ai.at(j);

    }
    answer = solver(W,H,xi,yi,ai);
    cout << answer << endl;
}