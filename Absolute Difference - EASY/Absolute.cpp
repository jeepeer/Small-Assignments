#include <iostream>

using namespace std;

int Absolute(int a, int b);

int main()
{
	int x = -6;
	int y = 4;
	int z = Absolute(x, y);

	printf("the absolute value of %d and %d is %d", x, y, z);
}

int Absolute(int a, int b)
{
	if (a > b)
	{
		return a - b;
	}
	else return b - a;
}