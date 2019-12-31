#include<iostream>

using namespace std;
int digitPlus(int inputNumber)
{
  int sumDigit;
  sumDigit=0;
  while(inputNumber != 0)
    {
      int digitEach;
      digitEach = inputNumber % 10;
      sumDigit = sumDigit + digitEach;
      inputNumber = ( inputNumber - digitEach) / 10;
    }
  return sumDigit;
}

int main(){
  int N,A,B; // 初期データ
  int sumN; // 桁合計
  int answer;
  int nCounter;
  cin >> N >> A >> B;
  answer = 0;
  for(nCounter = 1; nCounter <= N;nCounter++)
    {
      int sumCounter;
      sumCounter = digitPlus(nCounter);
      if(A <= sumCounter && sumCounter <= B){
	  answer = answer + nCounter;
	}
    }
  cout << answer << endl;
}
