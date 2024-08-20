#include <iostream>
#include <array>
#include <cmath>
#include <ctime>
using namespace std;

const int SIZE = 100;
// getLength: use while loop, passing number / 10, length increases 1.
int getLength(int);
// Armstrong: get digit, power up digit, add powered number, passing number / 10.
bool checkArmstrong(int, int);
// prime: check number is divisible by 2 to the number -1. 
bool checkPrime(int);
// palindrome: number modulo 10 to get digit, digit *10, add digit, number /10.
bool checkPalindrome(int);

int main()
{
	srand(time(NULL));

	int arrays[SIZE];
	int length, passingNum;

	for (int i = 0; i < SIZE; i++)
	{
		arrays[i] = rand()%999;
	}
	for (int i = 0; i < SIZE; i++)
	{
		passingNum = arrays[i];
		length = getLength(passingNum);

		if (checkArmstrong(passingNum, length))
			cout << arrays[i] << " ";

		else if (checkPrime(passingNum))
			cout << arrays[i] << " ";

		else if (checkPalindrome(passingNum))
			cout << arrays[i] << " ";
	}
}
int getLength(int lengthNum)
{
	int length = 1;
	while (lengthNum != 0)
	{
		length++;
		lengthNum /= 10;
	}
	return length;
}
bool checkArmstrong(int passingNum, int length)
{
	int digit, armstrong = 0;
	int check = passingNum;

	while (passingNum != 0)
	{
		digit = passingNum % 10;
		armstrong = armstrong + pow(digit, length);
		passingNum /= 10;
	}
	if (armstrong == check)
	{
		return true;
	}
	return false;
}
bool checkPrime(int prime)
{
	for (int i = 2; i < sqrt(prime); i++)
	{
		if (prime % i == 0)
		{
			return false;
			break;
		}
	}
	return true;
}
bool checkPalindrome(int num)
{
	int digit, sum = 0;
	int check = num;
	while (num != 0)
	{
		digit = num % 10;
		sum = sum * 10 + digit;
		num /= 10;
	}
	if (check == num)
	{
		return true;
	}
	return false;
}
