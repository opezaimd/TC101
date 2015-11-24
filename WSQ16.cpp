#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

int main ()
{
string read, hmpg, cmpg, p;
int x = 57;
float highway, city, price;
float ahigh = 0.0;
float acity = 0.0;
float aprice = 0.0;

ifstream read_file("93cars.dat.txt");
  if (read_file.is_open())
  {
    for (int i=0; i<93; i++)
      {
        getline(read_file, read);

        hmpg = read.substr(55,2);
        istringstream buffer(hmpg);
        buffer >> highway;

        cmpg = read.substr(52,2);
        istringstream buffer2(cmpg);
        buffer2 >> city;

        p = read.substr(42,4);
        istringstream buffer3(p);
        buffer3 >> price;

        ahigh = ahigh + highway;
        acity = acity + city;
        aprice = aprice + price;

        getline(read_file, read);
      }

      read_file.close();
  }else
  {
    cout << "File could't be opened." << endl;
  }

  cout << "Average gas milage in City = " << acity/93 << endl;
  cout << "Average gas milage on Highway = " << ahigh/93 << endl;
  cout << "Average midrange price of vehicles = " << aprice/93 << endl;
  return 0;
}
