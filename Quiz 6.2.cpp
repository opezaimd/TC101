#include <iostream>
using namespace std;

char star(int x)
{
  return '*';
}
int main()
{
  int x;
  cout << "How many * you want to print?" << endl;
  cin >> x;
  while(x>0)
  {
    cout << star(x);
    x = x -1;
  }
  return 0;
}
