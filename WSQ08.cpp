#include <iostream>
using namespace std;

int add(int x, int y)
{
  return x + y;
}
int sub(int x, int y)
{
  return x - y;
}
int product(int x, int y)
{
  return x * y;
}
int division(int x, int y)
{
  return x / y;
}
int reminder(int x, int y)
{
  return x % y;
}

int main ()
{
int x , y;
cout << "Enter two real numbers" << endl;
cin >> x >> y;

cout << "The addition of them is " << add(x , y) << endl;
cout << "The substraction of them is " << sub(x , y) << endl;
cout << "The product of them is " << product(x , y) << endl;
cout << "The divition of them is " << division(x , y) << endl;
cout << "The reminder of the division is " << reminder(x , y) << endl;
return 0;
}
