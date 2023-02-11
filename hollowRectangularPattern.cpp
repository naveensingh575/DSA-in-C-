#include <iostream>
using namespace std;

int main() {
  for(int row =0; row < 3; row++)
  {
    // fiest and last row
     if(row ==0 || row ==2)
     {
       for(int col =0; col <5; col++)
       {
         cout << "*";
       }
     }
     else
     {
       //print first *
       cout << "*";

       for(int col =1; col < 4; col++)
       {
         //print space
         cout << " ";
      
       }
       //print last *
       cout <<"*";
     }
    cout << endl;
  }
  
}
