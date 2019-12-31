#include<iostream>
#include<vector>
using namespace std;
long long GCD(long long seme,long long uke)
{
  if(uke < seme)
    {
      long long tmp;
      tmp = seme;
      seme = uke;
      uke = tmp;      
    }
  if(seme == 0)
    {
      return uke;
    }

  else
    {
      return GCD(uke%seme,seme);
    }

}

int main()
{
  int N;

  cin >> N;
  vector<long long> A(N);
  for(int i=0;i<N;i++)
    {
      cin >> A[i];      
    }
  long long answer = A[0];
  for(int i=0;i<N;i++)
    {
      answer = GCD(A[i],answer);      
    }
  
  cout << answer << endl;
  
}
