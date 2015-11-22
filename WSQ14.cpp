#include <iostream>
#include <cmath>
using namespace std;

double euler(double a)
{
  double e, b;
  if(a==0)
  {
    e=1;
    return e;
  }
  b= 1+(1/a);
  e=pow(b,a);
  return e;
}
int main()
{
double n, e;
cout << "This program calculates the approximation of an integer to Euler's number" << endl;
cout << "Enter an integer number: " << endl;
cin >> n;
cout << "Euler = " << euler(n) << endl;
return 0;
}
