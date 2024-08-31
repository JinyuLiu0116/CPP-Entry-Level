//Odd Up, Even Down — N Times
//Create a function that performs an even - odd transform to an array, n times.Each even - odd transformation :
//
//Adds two(+2) to each odd integer.
//Subtracts two(-2) from each even integer.
//#include <iostream>
//#include <array>
//using namespace std;
//const int SIZE = 10;
//
//void oddUpEvenDown(int[], int);
//int main()
//{
//	int array[SIZE];
//	int amount;
//	cout << "Enter the number of times: ";
//	cin >> amount;
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		array[i] = rand() % 20 + 1;
//		cout << array[i] << " ";
//	}
//	cout << '\n';
//	oddUpEvenDown(array, amount);
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << array[i] << " ";
//	}
//
//}
//void oddUpEvenDown(int array[], int amount)
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		for(int j=1; j<=amount;j++)
//		{
//			if (array[i] % 2 == 0)
//			{
//				array[i] -= 2;
//			}
//			else
//			{
//				array[i] += 2;
//			}
//		}
//	}
//}

//Sum of Odd and Even Numbers
//Write a function that takes an array of numbers and returns an array with two elements :
//
//The first element should be the sum of all even numbers in the array.
//The second element should be the sum of all odd numbers in the array.
/*#include <iostream>
#include <array>
using namespace std;
const int SIZE1 = 6, SIZE2=2;

int sumOfOddAndEven(int[], int[]);
int main()
{
	int array1[SIZE1];
	int array2[2] = { 0,0 };

	for (int i = 0; i < SIZE1; i++)
	{
		array1[i] = rand() % 10;
		cout << array1[i] << " ";
	}
	cout << '\n';
	sumOfOddAndEven(array1, array2);
	for (int i = 0; i < SIZE2; i++)
	{
		cout << array2[i] << " ";
	}

}
int sumOfOddAndEven(int array1[], int array2[])
{
	int sumOdd = 0, sumEven = 0;
	for (int i = 0; i < SIZE1; i++)
	{
		if (array1[i] % 2 == 0)
		{
			sumEven += array1[i];
		}
		else
		{
			sumOdd += array1[i];
		}
	}
	return array2[0] = sumEven, array2[1] = sumOdd;
}*/

#include <iostream>
using namespace std;
const int SIZE = 30;
//ASCII: 65-90
int main()
{
	srand(time(NULL));
	int array[SIZE], count=0;
	char userInput;

	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand() % 26 + 66l;
	}
	cout << "Input an upper case alphabet: ";
	cin >> userInput;

	cout << "[";
	for (int j = 0; j < SIZE; j++)
	{
		cout << (char)array[j];
		if (userInput == (char)array[j])
		{
			count++;
		}
		if ((j+1) % 6 != 0)
		{
			cout << ", ";
		}
		else if (j == 0)
		{
			cout << ", ";
		}
		else if (j == 29)
		{
			cout << "]";
		}
		else
			cout << "],\n[";
	}
	cout << endl;
	cout << "There has " << count << userInput;


}
