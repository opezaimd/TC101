#include <iostream>
using namespace std;
int gcd(int x, int y)
{
  int z;
  if (y==0){
    return x;
  }
while (y!=0){
  z= y;
  y= x%y;
  x= z;
}
{
  return z;
}
}
int main ()
{
  int x, y, z;
  cout << "This program calculates the GCD of two integer numbers" << endl;
  cout << "Enter the first number" << endl;
  cin >> x;
  cout << "Enter the second number" << endl;
  cin >> y;
  cout << "The GCD of the two numbers = " << gcd(x,y) << endl;
  return 0;
}
