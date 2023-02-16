#include <iostream>
using namespace std;
int main(){
  double principle,rate,time,interest;
  cout << "Enter the principle ";
  cin >> principle;
  cout << "Enter the rate ";
  cin >> rate;
  cout << "Enter the time period ";
  cin >> time;
  interest = (principle*rate*time)/(100);
  cout << "Interest value is " << interest;
  return 0;
}
  
