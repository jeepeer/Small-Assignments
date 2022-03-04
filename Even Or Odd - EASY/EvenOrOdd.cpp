#include <iostream>

using namespace std;

string EvenOrOdd(int a);

int main()
{
	int x = 0;

	int n;
	n & 1; // looks at the last bit thing brain hurts

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