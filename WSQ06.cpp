#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main()
{
int total=0;    //total attempts
int attempts;  //number of attempts

int guess;
int random = 0;
 srand(time(0));
 random = rand()% 100 + 1;
 attempts = attempts + 1;
 total = attempts;

 cout << "Guess a number between 1 and 100!" << endl;
 do
 {
   cin >> guess;

   if (guess > random)
   {
     cout <<  "Too high, try again" << endl;
     attempts = attempts + 1;
     total = attempts;
   }
   else if (guess < random)
   {
     cout << "Too low, try again" << endl;
     attempts = attempts + 1;
     total = attempts;
   }
   else
   {
     cout << "You win!" << endl;

   }
 } while (guess!=random);

 cout << "You made " << total << " attempts until you got the right answer";

 return 0;
}
