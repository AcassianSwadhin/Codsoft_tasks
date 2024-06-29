#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

 
int
main ()
{
  
srand (time (0));
  
int random_number = rand () % 100;
  
cout << "Let's play a number guessing game.\n";
  
cout << "Guess a number between 0 and 99.\n";
  
cout << random_number << endl;
  
 
int n;
  
bool guessedCorrectly = false;
  
 
while (!guessedCorrectly)
	{
	  
cout << "Enter your guess: ";
	  
cin >> n;
	  
 
if (n == random_number)
		{
		  
cout << "Congratulations! Your guess is correct.\n";
		  
guessedCorrectly = true;
		
}
	  
	  else if (abs (n - random_number) <= 15)
		{
		  
cout << "You are very close to the number.\n";
		
}
	  
	  else if (n < random_number)
		{
		  
cout << "Make a bigger guess.\n";
		
}
	  else if (n > random_number)
		{
		  
cout << "Make a smaller guess.\n";
		
}
	
}
  
 
return 0;

}
