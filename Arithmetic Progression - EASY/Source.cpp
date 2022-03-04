#include <iostream>

using namespace std;

string ArithmeticProgressionCheck(int arrish[], int arrLength);

int main()
{
	int arr[5]{ 0,2,4,6,8 };
	int arrLength = 5;

	cout << ArithmeticProgressionCheck(arr, arrLength) << endl;

	return 0;
}

string ArithmeticProgressionCheck(int arrInt[], int arrLength)
{
	int previous = 0;
	int next = 2;
	int temp = 0;
	string output = "";

	for (size_t i = 1; i < arrLength - 1; i++)
	{
		temp = arrInt[i] - arrInt[previous];
		if (temp != arrInt[next] - arrInt[i])
		{
			output = "Not very epic at all :( ";
			break;
		}

		++previous;
		++next;

		output = "Woah, that's epic :D ";
	}
	return output;
}