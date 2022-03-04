#include <iostream>

using namespace std;

float ConvertToFahrenheit(float celcius);

int main() 
{
	float celcius = 36;
	float fahrenheit = ConvertToFahrenheit(celcius);

	printf("%f celcius is %f fahrenheit!", celcius, fahrenheit);
}

float ConvertToFahrenheit(float celcius)
{
	return celcius * 9 / 5 + 32;
}