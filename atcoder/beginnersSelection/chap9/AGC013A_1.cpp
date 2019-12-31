#include<iostream>
#include<vector>

using namespace std;
// Problem https://atcoder.jp/contests/agc013/tasks/agc013_a
int main(void){
    int N;
    int answer=0;
    cin >> N;
    vector<long long> Ai(N);
    for(int j=0;j<N;j++){
        cin >> Ai.at(j);
    }
    int updown=0;// up 1 down -1 reset 0
    for(int j=1;j<N;j++){
        if(updown == 1 ){ // case in "up"
            if(Ai.at(j-1) > Ai.at(j)){
                // change down 
                answer = answer + 1;
                updown = 0;
            }
        }
        else{
            if(updown == -1){ // case in "down"
                if(Ai.at(j-1) < Ai.at(j)){
                    // change up
                    answer = answer + 1;
                    updown = 0;
                }
            }
            else{ // case in "initial"
                if(Ai.at(j-1)<Ai.at(j)){
                    updown = 1;
                }
                else{
                     if(Ai.at(j-1)>Ai.at(j)){
                         updown = -1;
                         }
                    else{
                        updown = 0;
                    }

                }
            }
        }
    }                 
    cout << answer+1 << endl;


    return 0;
}