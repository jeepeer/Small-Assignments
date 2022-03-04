#include <iostream>

using namespace std;

string Palindrome(string str, int strLength);

int main() 
{
	string xStr = "poop";
	string yStr = "poopie";
	int xSize = size(xStr);
	int ySize = size(yStr);

	cout << xStr << " " << Palindrome(xStr, xSize) << endl;
	cout << yStr << " " << Palindrome(yStr, ySize) << endl;
}

string Palindrome(string str, int strLength)
{
	string output = "";
	int j = strLength -1;

	for (size_t i = 0; i < strLength; i++)
	{
		if (str[i] != str[j])
		{
			output = "is not a palindrome";
		}
		else output = "is a palindrome";

		--j;
	}
	return output;
}