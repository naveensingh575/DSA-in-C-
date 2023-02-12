#include<iostream>
using namespace std;
int main()
{
  int digit;
  cout << "Enter a no. digit to print from 1, digit:";
  cin >> digit;
  if(digit >0)
  {
    for(int i =1; i<=digit; i++)
    {
      cout << i << endl;
    }
  }
  else
  {
    cout << "enter a no. greater zero";
  }
  return 0;
}
