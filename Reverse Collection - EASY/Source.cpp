#include <iostream>

using namespace std;

int GetStringSize(string str);
void StringToChar(string str, int strSize);

int main() 
{
	string epic = "epic string text";
	int epicSize = 0;
	
	epicSize = GetStringSize(epic);

	StringToChar(epic, epicSize);
}

int GetStringSize(string str) 
{
	int size = 0;
	for (char character : str)
	{
		++size;
	}
	return size;
}

void StringToChar(string str, int strSize)
{
	for (size_t i = strSize +1; i > 0; i--)
	{
		cout << str[i -1];
	}
}