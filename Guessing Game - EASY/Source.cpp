#include <iostream>

using namespace std;

int main() 
{
	int x = 0;
	srand(time(0));
	int y = rand() % 10;
	int tries = 0;

	cout << "Guess a number between 0 - 10 " << endl;
	
	while (x != y)
	{
		cin >> x;
		
		if (x == y) 
		{
			cout << "You guessed correct! It only took " << tries << " tries!" << endl;
		}
		else 
		{
			cout << "You guessed incorrect :( try again!" << endl;
			++tries;
		}
	}
}