#include <iostream>
using namespace std;

int main() {
  int rowNum, colNum;
  cout << "Enter number of row: ";
  cin >> rowNum;
  cout << "Enter number of col: ";
  cin >> colNum;
  
  for(int row =0;row<rowNum;row++)
  {
      if((row ==0) || (row == rowNum-1))
      {
        for(int col =0;col<colNum;col++)
        {
          cout << "* ";
        }
      } 
      else
      {
        for(int col =0;col<colNum;col++)
	      {
      	  if((col == 0) || (col == (colNum-1)))
      	  {
      		cout << "* ";
      	  }
      	  else
      	  {
      		cout << "  ";
      	  }
	      }
      }
    cout << endl;
  }
  return 0;
}
