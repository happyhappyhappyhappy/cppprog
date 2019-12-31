#include<iostream>
#include<utility>
#include<vector>
using namespace std;

// Problem https://atcoder.jp/contests/abc074/tasks/arc083_a

pair<int,int> solver(int A,int B,int C,int D,int E,int F){
    int oneCupA=A*100;
    int oneCupB=B*100;
    int oneSpoonSugerC = C;
    int oneSpoonSugerD = D;
    int meltPer100 = E;
    int resultSW = F;
    double maxMeltRate=(double)meltPer100/((double)meltPer100+100.0);
    vector<int> canWater;
    for(int j=0;j<=resultSW;j=j+oneCupA){
        for(int k=0;k<=resultSW-j;k=k+oneCupB){
            if( j==0 and k==0)continue;
            canWater.push_back(j+k);
        }
    }
/**     for(int j=0;j<canWater.size();j++){
        cout << canWater.at(j) << " ";
    } **/
    double maxMeltMax=0.0;
    int maxMeltWater,maxMeltSugar;
    for(int j=0;j<canWater.size();j++){
        for(int k=0;k<=resultSW-canWater.at(j);k=k+oneSpoonSugerC){
            for(int m=0;m<=resultSW-canWater.at(j)-k;m=m+oneSpoonSugerD){
            //    cout << "Water:" << canWater.at(j) << " ";
            //    cout << "C: " << k << " ";
            //    cout << "D: " << m  << " ";
                // cout << endl ;
                int suger=k+m;
            //    cout << "SugarSum: " << suger << " ";
                double nowMeltRate;
                nowMeltRate = (double)suger / ((double)canWater.at(j)+(double)suger);
            //    cout << "NowMelt: " << nowMeltRate << " ";
                if(maxMeltMax <= nowMeltRate and nowMeltRate <= maxMeltRate){
                    maxMeltMax = nowMeltRate;
                    maxMeltWater = canWater.at(j)+suger;
                    maxMeltSugar = suger;
            //        cout << "TOKERU" << " ";
                }
              //  else{
            //        cout << "TOKENAI" << " ";
            //    }
            //    cout << endl;
            }
        }
    }
    cout << endl;
    return {maxMeltWater,maxMeltSugar};
}

int main(void){
    int A,B,C,D,E,F;
    cin >> A >> B >> C >> D >> E >> F;
    pair<int,int> answer = solver(A,B,C,D,E,F);
    cout << answer.first << " " << answer.second << endl;
    return 0;
}
