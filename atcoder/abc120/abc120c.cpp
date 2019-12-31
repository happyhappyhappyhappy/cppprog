#include<iostream>
#include<string>
using namespace std;

int main(){
  string s;
  int zero_counter,one_counter;
  int i,slength,answer;
  cin >> s;
  zero_counter = 0;
  one_counter = 0;
  slength = s.size();
  for(i = 0;i<slength;i++)
    {
      if(s[i] == '0')
	{
	  zero_counter = zero_counter + 1;
	}
      else
	{
	  one_counter = one_counter + 1;
	}
    }
  if( one_counter < zero_counter )
    {
      answer = one_counter * 2;
    }
  else
    {
      answer = zero_counter * 2;
    }
  cout << answer << endl;
}
