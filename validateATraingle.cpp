#include <iostream>
using namespace std;
int main(){
  //Read sides of a triangle
  cout << "Enter sides of Triangles ";
  int a, b,c;
  cin >>a;
  cin >>b;
  cin >>c;
  if((c<a+b) && (b<a+c) && (a<b+c))
  {
    cout << "valid traingle";
  }
  else
  {
    cout << "Invalid traingle";
  }
  return 0;
}
