#include <iostream>
using namespace std;

int main()
{
  int f, c, k;

  cout << "What is the temperature in Farenheits?" << endl;
  cin >> f;
  c = (f - 32)/1.8;
  cout << "That temperature in Celsius is "; cout << c << endl;

if (c > 100)
{
  cout << "Water will boil at that temperature" << endl;
}
if (c < 100)
{
  cout << "Water won't boil at that temperature" << endl;
}
cout << "Do you want to know what's that temperature in Kelvins? " << endl;

string answer;
cin >> answer;

if (answer == "yes", "sure")
{
  k = (c + 273.15);
  cout << "The temperature in Kelvins is "; cout << k << endl;
}
  return 0;
}
