#include <iostream>
using namespace std;
int main(){
  int a,b,c;
  cout << "Enter a,b,c ";
  cin >>a;
  cin >>b;
  cin >>c;
  if(a>b)
  {
    if(b>c)
    {
      cout << a << " is maximum among three";
    }
    else
    {
      cout <<b <<  " is maximum among three";
    
    }
  }
  else
  {
    if(b>c)
    {
      cout << b << " is maximum among three";
    }
    else 
    {
      cout << c << " is maximum among three";
    }
    
  }
  return 0;
  }
    
