#include <iostream>
using namespace std;

int main()
{
int x, y, z, w;

  cout << "Enter two real numbers" << endl;
  cin >> x >> y;
  z = x + y;
  cout << "The addition of them is: ";
  cout << z << endl;
  z = x - y;
  cout << "The substraction of them is: ";
  cout << z << endl;
  z = x * y;
  cout << "The product of them is: ";
  cout << z << endl;
  z = x / y;
  cout << "The divition of them is: ";
  cout << z << endl;
  w = x % y;
  cout << "The reminder of them is: ";
  cout << w << endl;
  cout << "Again? ";

  string answer;
  cin >> answer;

do
{
  cout << "Enter two real numbers" << endl;
  cin >> x >> y;
  z = x + y;
  cout << "The addition of them is: ";
  cout << z << endl;
  z = x - y;
  cout << "The substraction of them is: ";
  cout << z << endl;
  z = x * y;
  cout << "The product of them is: ";
  cout << z << endl;
  z = x / y;
  cout << "The divition of them is: ";
  cout << z << endl;
  w = x % y;
  cout << "The reminder of them is: ";
  cout << w << endl;
  cout << "Again? ";
  cin >> answer;
} while (answer == "yes");

  return 0;
}
