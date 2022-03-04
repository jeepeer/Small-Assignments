#include <iostream>

using namespace std;

string EvenOrOdd(int a);

int main()
{
	int x = 0;

	printf("enter a number to see if it's even or odd! :");
	cin >> x;
	cout << EvenOrOdd(x) << endl;
}

string EvenOrOdd(int a)
{
	if (a % 2 == 0)
	{
		return "Even";
	}
	else return "Odd";
}