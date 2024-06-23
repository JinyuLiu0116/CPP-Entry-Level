#include <iostream>
#include <array>
#include <cmath>
#include <ctime>
using namespace std;

const int SIZE = 100;
// getLength: i++, length=i, passing number / 10.
int getLength(int);
// Armstrong: get digit, power up digit, add powered number, passing number / 10.
bool checkArmstrong(int, int);
//bool checkPrime();
//bool checkPalindrome();

int main()
{
	srand(time(NULL));

	int arrays[SIZE];
	int length, passingNum;

	for (int i = 0; i < SIZE; i++)
	{
		arrays[i] = rand();
	}
	for (int i = 0; i < SIZE; i++)
	{
		passingNum = arrays[i];
		length = getLength(passingNum);
		if (checkArmstrong(passingNum, length))
		{
			cout << arrays[i] << " ";
		}
	}
	//using log to get the length of a number.
	//int lengthLog = ceil(log10(num));
	/*cout << length;*/

	
}
int getLength(int lengthNum)
{
	int length=0;
	for (int i = 1; lengthNum != 0; i++)
	{
		length = i;
		lengthNum /= 10;
	}
	return length;
}
bool checkArmstrong(int passingNum, int length)
{
	int digit, armstrong = 0;
	int check = passingNum;

	while(passingNum != 0)
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


