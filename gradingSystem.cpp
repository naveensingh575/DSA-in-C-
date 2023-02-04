#include <iostream>
using namespace std;
int main() {
  int marks;
  cout << "Enter marks:";
  cin >> marks;
  if(marks >= 0  && marks <= 100 )
  {
    if(marks >= 90)
    {
      cout << "A";
    }
    else if(marks >= 80)
    {
      cout << "B";
    }
    else if(marks >= 60)
    {
      cout << "C";
    }
    else if (marks >= 40)
    {
      cout << "D";
    }
    else
    {
      cout << "F";
    }
    
  }
  else
  {
    cout << "Please enter correct marks";
  }
  return 0;
}
