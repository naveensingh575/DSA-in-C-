#include <iostream>
using namespace std;
//code for printing a hollow pyramid 
int main()
{
  //Take input from user
  int num;
  cout << "Enter the no. of rows and col :";
  cin >> num;
  for(int row =0;row<num;row++)
  {
    for(in col =0;col<num;col++)
    {
      if((row==0)||(col==0)||(col=num-row-1))
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}
    
