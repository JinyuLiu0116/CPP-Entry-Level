//// 22	Write a function that reverses a number.
//#include <iostream>
//using namespace std;
//
//int reversion(int);
//int main()
//{
//	int num;
//	cout << "Enter a number to reverse: ";
//	cin >> num;
//	cout << reversion(num);
//
//}
//int reversion(int num)
//{
//	int digit, sum = 0;
//	while (num > 0)
//	{
//		digit = num % 10;
//		sum = sum * 10 + digit;
//		num /= 10;
//	}
//	return sum;
//}

//23	Write a program to take two arrays and store results in the third array.
#include <iostream>;
using namespace std;

void fillArray(int[], int);
int main()
{
	srand(time(NULL));
	int index = 0;
	int array1[10];
	int array2[20];
	int array3[30];
	fillArray(array1, 10);

	fillArray(array2, 20);
	for (int i = 0; i < 20; i++)
	{
		cout << array2[i] << " ";
	}



	/*for (int j = 0; j < 10; j++)
	{
		array3[j] = array1[j];
	}
	for (int n = 10; n < 30; n++)
	{
		array3[n] = array2[index];
		index++;
	}
	for (int i = 0; i < 30; i++)
	{
		cout << array3[i] << " ";
	}*/

	
}
void fillArray(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 50 + 1;
	}
}
