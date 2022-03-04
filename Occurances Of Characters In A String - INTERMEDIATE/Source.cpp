#include <iostream>
#include <string>
#include <vector>
#include <map>

void StringToVector(std::string string, std::vector<char>& arr)
{	
	for (int i = 0; i < string.length(); i++)
	{
		char upperChar = toupper(string[i]);
		arr.push_back(upperChar);
	}
}

void CharacterOccurences(std::vector<char> arr, std::map<char, int>& map)
{
	int previous = -1;
	int n = 1;

	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] == arr[previous])
		{
			map.insert(std::pair<char, int>(arr[previous], n + 1));
		}

		else
		{
			map.insert(std::pair<char, int>(arr[previous], n));
		}

		previous++;
	}
}

void PrintMap(std::map<char, int> map)
{
	for (auto c : map)
	{
		std::cout << c.first << " " << c.second << std::endl;
	}
}

int main()
{
	std::string str = "Hello";
	std::vector<char> charArr;
	std::map<char, int> charMap;

	StringToVector(str, charArr);
	CharacterOccurences(charArr, charMap);
	PrintMap(charMap);
}