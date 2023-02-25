#include <iostream>
using namespace std;
//code for printing a full pyramid 
int main()
{
  //Take input from user
  int num;
  cout << "Enter the no. of rows and col :";
  cin >> num;
  for(int row =0;row < num;row++)
  {
    
    for(int col =0; col <= num+row-1;col =col+1)
    {
     
      if(row == (num-1))
      {
        cout << "*";
      }
      else
      {
        if(col == (num-row-1)||col == (num+row-1))
        { 
          cout << "*";
        }
        else
        {
          cout << " ";
        }
      }
    }
    cout << endl;
  }
  return 0;
}
