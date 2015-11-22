#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int check_Banana(string j){
string t;
int ban=0;
int loc= 0;
ifstream MyFile(j);

if (MyFile.is_open()==1)
{
    cout << "File opened"<<endl;
    while(getline(MyFile, t));
    MyFile.close();

for (int i=0; i<t.length(); i++)
{
    if(isupper(t[i])) t[i]=tolower(t[i]);
}
while (t.find("banana", loc)!=-1)
{
    ban++;
    loc= t.find("banana",loc)+1;
}
return ban;
}

else cout << "File not be opened";
return 0;
}

int main()
{
string name;
cout << "Name of your file.txt: "; << getline(cin, name);
cout << "The number of bananas in your file.txt = " << check_Banana(name) << endl;
}
