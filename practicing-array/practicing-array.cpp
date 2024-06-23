#include <iostream>
using namespace std;
const int SIZE = 100;

int getLenth(int);
void fillArray(int[]);
bool checkPrime(int);
bool checkParall(int);
bool checkAmstran(int, int);
int main()
{
	srand(time(NULL));
	int array[SIZE];
	int lenth;
	fillArray(array);
	
	for (int i = 0; i < SIZE; i++)
	{
		if (checkPrime(array[i]))
		{
			cout << array[i] << " ";
		}
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		if (checkParall(array[i]))
		{
			cout << array[i] << " ";
		}
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		lenth = getLenth(array[i]);
		if (checkAmstran(array[i],lenth))
		{
			cout << array[i] << " ";
		}
	}
}
int getLenth(int num)
{
	int lenth=1;
	while (num != 0)
	{
		num /= 10;
		lenth++;
	}
	return lenth;
}
void fillArray(int array[])
{
	for (int i = 0; i < SIZE; i++)
	{
		array[i] = rand() % 300 + 1;
	}
}
bool checkPrime(int num)
{
	if (num <= 1)
		return false;
	for (int j = 2; j < num; j++)
	{
		if (num % j == 0)
		{
			return false;
			break;
		}
	}
	return true;
}
bool checkParall(int num)
{
	int check = num;
	int digit, sum = 0;
	while (num != 0)
	{
		digit = num % 10;
		sum = sum * 10 + digit;
		num /= 10;
	}
	if (sum == check)
	{
		return true;
	}
	return false;
}
bool checkAmstran(int num, int lenth)
{
	int check = num;
	int digit, sum = 0;
	for (int i = 0; i < lenth; i++)
	{
		digit = num % 10;
		sum = sum + pow(digit, lenth);
		num /= 10;
	}
	if (check == sum)
	{
		return true;
	}
	return false;
}