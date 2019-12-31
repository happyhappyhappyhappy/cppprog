#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int N; 
  int a[110];
  cin >> N;
  int i;
  int bobScore=0,aliceScore = 0;
  int answer;
  for(i = 0 ; i<N ;i++){
    cin >> a[i];
  }
  sort(a,a+N,greater<int>());
  i = 0;
  
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
