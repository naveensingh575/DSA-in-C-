// To calculate the perameter of a triangle

#include <iostream>
using namespace std;

int main() {
  int side1,side2,side3,perameter;
  cout << "Enter first side of a triangle: ";
  cin >> side1;
  cout << "Enter second side of a triangle: ";
  cin >> side2;
  cout << "Enter third side of a traingle: ";
  cin >> side3;  
  perameter  = side1+side2+side3;
  cout << "perameter of a triangle is " << perameter;
  
  return 0;
}


