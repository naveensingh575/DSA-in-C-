#include<iostream>
using namespace std;
int main()
{
  cout << "Enter a no.:";
  int num;
  int table;
  cin >> num;
  if(num >0)
  {
   
      for(int i =1; i <= 10; i++)
      {
        table = num*i;
        cout << table << endl;
      }
    
  }
  else
  {
    cout << "Enter a no. gtrater than zero";
  }
  END:
  return 0;
}
