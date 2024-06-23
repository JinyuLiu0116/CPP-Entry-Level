// -> a program to convert binary to decimal. Get binary number from user. Use functions
// -> get digit 
// -> multiply 2 to the power variable 
// -> multiply 10
// -> binary number divide by 10

#include <iostream>
#include <cmath>
using namespace std;
//creat function heather
int converF(int);

int main()
{
	int binaryNum;
	cout << "Enter a binary number: ";
	cin >> binaryNum;
	//function call
	converF(binaryNum);
}
//function expression
int converF(int binaryNum) {
	int conver, decimalNum = 0;
	for (int i = 0; binaryNum > 0; i++) {
		conver = binaryNum % 10;
		decimalNum = decimalNum + conver * pow(2, i);
		binaryNum = binaryNum / 10;
	}
	return decimalNum;
}