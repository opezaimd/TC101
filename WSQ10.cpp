#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float t=0, a=0, std=0;
  int i;
  float list[10];
  cout << "Write 10 numbers" << endl;
  cout << "First: ";
  cin >> list[0];
  cout << "Second: ";
  cin >> list[1];
  cout << "Third: ";
  cin >> list[2];
  cout << "Fourth: ";
  cin >> list[3];
  cout << "Fifth: ";
  cin >> list[4];
  cout << "Sixth: ";
  cin >> list[5];
  cout << "Seventh: ";
  cin >> list[6];
  cout << "Eighth: ";
  cin >> list[7];
  cout << "Neinth: ";
  cin >> list[8];
  cout << "Tenth: ";
  cin >> list[9];

for(i=0;i<10;i++){

    t=t+list[i];
  }
  a=t/10;

  for(i=0;i<10;i++)
  {
    std=std+(list[i]-a)*(list[i]-a);
  }
  std=std/10;
  std=sqrt(std);

  cout << "Sum= " << t << endl;
  cout << "Average= " << a << endl;
  cout << "Standard deviation= " << std << endl;
  return 0;
}
