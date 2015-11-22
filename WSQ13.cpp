#include <iostream>
using namespace std;

float babyl (float n)
{
  float x = n;
  float y = 1;
  float e = 0.000001;
  while(x - y > e)
  {
    x = (x + y)/2;
    y = n/x;
  }
  return x;
}
int main ()
{
  float n;
  cout << "This program calculates the square root an integer number using the Babylonian method" << endl;
  cout << "Enter a number." << endl;
  cin >> n;
  cout << "The square root = " << babyl(n) << endl;
  return 0;
}
