#include <iostream>
#include <array>
#include <ctime>
using namespace std;
const int SIZE = 1000;
// fillArray: fill arrays with random number from 1-100.
// if the number greater then 95, use break.
int fillArray(int[], int);

int main()
{
	srand(time(NULL));
	int arrays[SIZE];
	int userInput, count=0;
	int realSize;

	realSize = fillArray(arrays, SIZE);
	
	cout << "Enter a number to check: ";
	cin >> userInput;
	//use if statement to check if user input appears in the array.
	// output the index position of the input number in the array.
	//use incremet to count how many times the number appears.

	for (int i = 0; i < realSize; i++) 
	{
		/*cout << arrays[i] << " ";*/
		if (userInput == arrays[i])
		{
			cout <<"arrays[" << i << "] ";
			count++;
		}
	}
	cout << endl;
	cout << "The number " << userInput << " has appears " << count << " times." << endl;
}
int fillArray(int arrays[], int SIZE)
{
	int realSize=1;
	for (int i = 0; i < SIZE; i++)
	{
		arrays[i] = rand() % 100 + 1;
		if (arrays[i] > 95)
			break;
		realSize ++;
	}
	return realSize;
}