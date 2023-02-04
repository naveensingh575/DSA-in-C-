#include <iostream>
using namespace std;
int main() {
  int age;
  string nationaliy;
  string voterId ;
  cout << "Enter age:" ;
  cin >> age;
  cout << endl << "Enter nationality:" ;
  cin >> nationaliy;
  cout << endl << "do you have voterid:";
  cin >> voterId;
  
  if (age > 18 && nationaliy == "Indian" && voterId == "Yes")
  {
    cout << "Congrats! You are eligible to vote";
  }
  else
  {
    cout << "Sorry,But You can't vote";
  }
  return 0;
}
