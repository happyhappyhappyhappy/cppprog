#include<iostream>
#include<string>
#include<bitset>

using namespace std;

// Problem https://atcoder.jp/contests/abc079/tasks/abc079_c
string solver(string fourNumber){
    string result;
    result.clear();
//    int test = 1 << 3;
//    cout << "1 << 3 = " << test << endl; 
    for(int bitPattern=0;bitPattern<(1<<3);bitPattern++){
        int tmp = 0;
        tmp = (int)(fourNumber.at(0) - '0');
        for(int k=0;k<3;k++){
            int tmp2 = 0;
            int bitChecker;
            tmp2 = (int)(fourNumber.at(k+1)-'0');
            bitChecker = bitPattern & 1 << k;
            if(0 < bitChecker){
                tmp = tmp + tmp2;
            }
            else{
                tmp = tmp - tmp2;
            }
        }
        if(tmp == 7){
            result.push_back(fourNumber.at(0));
            for(int k=0;k<3;k++){
                int bitChecker;
                int picUpNumber = (int)(fourNumber.at(k+1));
                bitChecker = bitPattern & (1 << k);
                if(0 < bitChecker){
                    result.push_back('+');
                    result.push_back(fourNumber.at(k+1));
                }
                else{
                    result.push_back('-');
                    result.push_back(fourNumber.at(k+1));
                }
            }
            result.append("=7\n");
            break;
        }
    }

    return result;
}


int main(void){
    string answer;
    string ABCD;
    cin >> ABCD;
    answer = solver(ABCD);
    cout << answer << endl;
    return 0;
}