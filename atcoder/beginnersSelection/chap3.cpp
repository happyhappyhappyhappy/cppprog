#include<iostream>

using namespace std;
int N;
int A[201];
int main(){
  cin >> N;
  int i;
  int counter;
  bool isTwoDevide;
  for(i = 0 ; i < N ; i++)
    {
      cin >> A[i];
    }
  counter = 0;
  while(true){
    isTwoDevide = true;
    for( i = 0 ; i < N; i++)
      {
	if(A[i]%2 != 0)
	  {
	    isTwoDevide = false;
	  }
      }
    if(isTwoDevide == false)
      {
	break;
      }
    for( i = 0 ; i < N ; i++)
      {
      A[i] = A[i] /  2;
      }
      counter = counter + 1;
  }
  cout << counter << endl;
}
