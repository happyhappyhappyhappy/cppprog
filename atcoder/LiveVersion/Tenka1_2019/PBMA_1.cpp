#include<iostream>
using namespace std;
// https://atcoder.jp/contests/tenka1-2019-beginner/tasks/tenka1_2019_a

bool checkHousePass(int firstHouse,int lastHouse,int checkHouse){
    int minHouse,maxHouse;
    if(firstHouse < lastHouse){
        minHouse=firstHouse;
        maxHouse=lastHouse;
    }
    else{
        minHouse = lastHouse;
        maxHouse = firstHouse;
    }
    if(minHouse <= checkHouse && checkHouse <= maxHouse){
        return true;
    }
    else{
        return false;
    }
    return true;
}

int main(void){
    int a,b,c;
    bool result;
    cin >> a >> b >> c;
    result = checkHousePass(a,b,c);
    if(result){
        cout << "Yes" << endl;
        return 0;
    }
    else{
        cout << "No" << endl;
        return 0;
    }

}