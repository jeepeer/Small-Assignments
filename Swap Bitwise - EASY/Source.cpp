#include <iostream>

void SwapBit(int &a, int &b)
{
	a = a^b;
	b = b^a;
	a = a^b;
}

int main()
{
	int x = 3;
	int y = 7;
	std::cout << "before:\nx = " << x << " y = " << y << std::endl;
	SwapBit(x, y);
	std::cout << "after:\nx = " << x << " y = " << y << std::endl;
}