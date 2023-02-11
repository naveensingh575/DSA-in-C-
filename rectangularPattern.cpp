#include <iostream>
using namespace std;

int main() {

int rowCount, colCount;
  cin >> rowCount;
  cin >> colCount;
  for(int row =0; row < rowCount; row++)
  {
    // fiest and last row
     if(row ==0 || row == rowCount-1)
     {
       for(int col =0; col <colCount; col++)
       {
         cout << "* ";
       }
     }
     else
     {
       //print first *
       cout << "* ";

       for(int col =1; col < colCount -1; col++)
       {
         //print space
         cout << "  ";
      
       }
       //print last *
       cout <<"*";
     }
    cout << endl;
  }
  
}
