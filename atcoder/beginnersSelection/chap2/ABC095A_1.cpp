#include<string>
#include<iostream>
using namespace std;
// https://atcoder.jp/contests/abc095/tasks/abc095_a

int toppingPrice(string ticketCard){
    int toppingCount=0;
    int toppingCoin ;
    if(ticketCard[0] == 'o')toppingCount +=1;
    if(ticketCard[1] == 'o')toppingCount +=1;
    if(ticketCard[2] == 'o')toppingCount +=1;
//    cout << "Topping is :" << toppingCount << endl;
    toppingCoin = toppingCount * 100;
    return toppingCoin;
}
int main(void){
    string ticketCard;
    int ramenPrice=700;
    int answer;
    cin >> ticketCard;
    answer = ramenPrice+toppingPrice(ticketCard);
    cout << answer << endl;
    return 0;
}