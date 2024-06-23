#include <iostream>
#include <array>
#include <ctime>
using namespace std;
const int SIZE = 1000;

int main()
{
	int array[SIZE];
	int count[101];
	int temp, input;
	cout << "enter a number between 1-100: ";
	cin >> input;

	for (int i = 0; i < 101; i++)
		count[i] = 0;

	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand() % 101;
		temp = array[i];
		count[temp]++;
	}
	cout << "The array has " << count[input] << " many of " << input;
}