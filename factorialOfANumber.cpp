#include <iostream>
using namespace std;
int main(){
  cout << "Enter a number ";
  int num;
  cin >> num;
  int fact =1;
  if(num >=0)
  { for(int i =num; i>=1; i--)
    {
      fact =fact*i;
    }
    cout << "Factorial of " << num << " is " << fact;
  }
  else
  {
    cout << "Please enter a Positive interger";
  }

    return 0;
}
