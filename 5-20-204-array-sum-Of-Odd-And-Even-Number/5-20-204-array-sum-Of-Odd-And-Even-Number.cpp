//Write a function that takes an array of numbers and returns an array with two elements :
//The first element should be the sum of all even numbers in the array.
//The second element should be the sum of all odd numbers in the array.
// return two values(use pointer).
#include <iostream>
using namespace std;
const int SIZE = 10;

void fillArray(int[]);
int main()
{
	srand(time(NULL));
	int sumEven = 0, sumOdd = 0;
	int array[SIZE];
	fillArray(array);
	return 0;
}
void fillArray(int array[])
{
	int sumEven = 0;
	int sumOdd = 0;
	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand() % 10 + 1;
		cout << array[i] << " ";
		if (array[i] % 2 == 0)
			sumEven += array[i];

		if (array[i] % 2 == 1)
			sumOdd += array[i];
	}
	cout << endl;
	cout<<"Sum of even is:"<< sumEven<<"\n"<<"Sum of odd is:"<< sumOdd;
}
