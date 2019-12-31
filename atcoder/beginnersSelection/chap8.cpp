#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int N; 
  int d[110];
  cin >> N;
  int i;
  int answer;
  for(i = 0;i < N;i++)
    {
      d[i]=0;
    }
  for(i = 0 ; i<N ;i++){
    cin >> d[i];
  }
  
  
  while( i < N ){
    if( i % 2 == 0)
      {
	aliceScore = aliceScore+a[i];
      }
    else
      {
	bobScore = bobScore+a[i];
      }
    i = i + 1;
  }
  
  answer = aliceScore-bobScore;
  cout << answer << endl;
}
