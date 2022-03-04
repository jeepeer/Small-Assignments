#include <iostream>

using namespace std;

int GetLastDigit(int a);

int main()
{
	int x = 137;

	cout << GetLastDigit(x) << endl;
}

int GetLastDigit(int a) 
{
	int y = abs(a) % 10;
	return y;
}