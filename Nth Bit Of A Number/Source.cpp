#include <iostream>

using namespace std;

int SetBit(int num, int n)
{
	return num |= 1 << n;
}

int GetBit(int num, int n)
{
	return (num >> n) & 1;
}

int main()
{
	int number = 12;
	std::cout << number << std::endl;
	std::cout << SetBit(number, 0) << std::endl;

	std::cout << "bit is set to: " << GetBit(number, 2) << std::endl;
}