#include <iostream>

using namespace std;

void SwapValues(int &a, int &b);

int main()
{
	int x = 3;
	int y = 7;

	cout << "Original x: " << x << endl;
	cout << "Original y: " << y << endl;

	SwapValues(x, y);

	cout << "Swapped x: " << x << endl;
	cout << "Swapped y: " << y << endl;
}

void SwapValues(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;

	swap(a, b);

	int* ptr = &a;
	temp = b;
	b = *ptr;
	ptr = &temp;
	a = *ptr;
}