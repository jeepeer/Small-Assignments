#include <iostream>

using namespace std;

int GetArraySum(int arr[], int arrlength);
int GetMinValue(int arr[], int arrlength);
int GetMaxValue(int arr[], int arrlength);
int GetArrayAverage(int arr[], int arrlength);

int main()
{
	int numbers[]{ 9,5,2,8,3 };
	int numLength = size(numbers);

	cout << "Sum of numbers: " << GetArraySum(numbers, numLength) << endl;
	cout << "Min of numbers: " << GetMinValue(numbers, numLength) << endl;
	cout << "Max of numbers: " << GetMaxValue(numbers, numLength) << endl;
	cout << "Average of numbers: " << GetArrayAverage(numbers, numLength) << endl;
}

int GetArraySum(int arr[], int arrlength) 
{
	int sum = 0;

	for (size_t i = 0; i < arrlength; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int GetMinValue(int arr[], int arrlength)
{
	int minValue = arr[0];

	for (size_t i = 0; i < arrlength; i++)
	{
		if (minValue < arr[i]) minValue = arr[i];
	}

	return minValue;
}

int GetMaxValue(int arr[], int arrlength)
{
	int maxValue = arr[0];

	for (size_t i = 0; i < arrlength; i++)
	{
		if (maxValue > arr[i]) maxValue = arr[i];
	}

	return maxValue;
}

int GetArrayAverage(int arr[], int arrlength)
{
	int average = 0;

	for (size_t i = 0; i < arrlength; i++)
	{
		average += arr[i];
	}
	return average / arrlength;
}