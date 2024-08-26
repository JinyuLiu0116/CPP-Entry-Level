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
//bool checkPrime(int);
//// palindrome: number modulo 10 to get digit, digit *10, add digit, number /10.
//bool checkPalindrome(int);
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

int main()
{
	cout << "this is 153 : " << endl;
	if (checkArmstrong(153, 3) == true) {
		cout << " YES IS ARMSTRONG";
	}
	else {
		cout << "NO IS NOT ARMSTRONG";
	}
}

//bool checkPrime(int prime)
//{
//	for (int i = 2; i < sqrt(prime); i++)
//	{
//		if (prime % i == 0)
//		{
//			return false;
//			break;
//		}
//	}
//	return true;
//}
//bool checkPalindrome(int num)
//{
//	int digit, sum = 0;
//	int check = num;
//	while (num != 0)
//	{
//		digit = num % 10;
//		sum = sum * 10 + digit;
//		num /= 10;
//	}
//	if (check == num)
//	{
//		return true;
//	}
//	return false;
//}
