#include<iostream>

using namespace std;
int main(){
  int A,B,C,X;
  int counter;
  int coin500,coin100,coin50;
  cin >> A >> B >> C >> X;
  counter = 0;
  for(coin500 = 0;coin500 <= A;coin500++)
    {
      for(coin100 =0;coin100 <= B;coin100++)
	{
	  for(coin50 = 0 ; coin50 <= C;coin50++)
	    {
	      int sumMoney;
	      sumMoney = coin500*500+coin100*100+coin50*50;
	      if(sumMoney == X){
		counter = counter + 1;
	      }
	    }
	}
    }
  cout << counter << endl;
}
