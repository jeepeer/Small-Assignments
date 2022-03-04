#include <iostream>

using namespace std;

int FindNumber(int arr[], int arrSize, int value);

int main()
{
	int xArr[]{ 0,1,2,3,4 };
	int xArrSize = size(xArr);
	int x = 4;

	cout << "the number " << x << " was located at " << FindNumber(xArr, xArrSize, x) << endl;
}

int FindNumber(int arr[], int arrSize, int value)
{
	for (size_t i = 0; i < arrSize; i++)
	{
		if (value == arr[i]) 
		{
			return i;
		}
	}
}