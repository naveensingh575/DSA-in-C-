#include<iostream>
using namespace std;
int main()
{
  cout << "Enter a no.:";
  int num;
  cin >> num;
  if(num >0)
  {
    if(num ==1)
    {
      cout << "one Neigther Prime nor Compsit";
    }
    else
    {
      for(int i =2; i<num; i++)
      {
        if(num%i == 0)
        {
          cout << "composit number";
          goto END;
          break;
        }
        
      }
       cout << "Prime number";
    }
    
  }
  else
  {
    cout << "Enter a no. gtrater than zero";
  }
  END:
  return 0;
}
