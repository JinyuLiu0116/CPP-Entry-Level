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
	int decimalNum = converF(binaryNum);
	cout << "The decimal number is: " << decimalNum;
}
//function expression
int converF(int binaryNum) {
	int decimalNum = 0;
	for (int i = 0; binaryNum > 0; i++) {
		int conver = binaryNum % 10;
		decimalNum += conver * pow(2, i);
		binaryNum /= 10;
	}
	return decimalNum;
}

//Write a program to get decimal number and convert to into any radix or base.
// -> get user input a decimal number
// -> get user input a radix
// -> get digit by decimal % radix
// -> digit * 10 + digit
// -> decimal number / radix
// -> the numb need to flip
// -> numbe % 10 to get digit
// -> digit *10 +digit
// -> numble / 10
/*#include <iostream>
using namespace std;

int convertion(int, int);
int flipping(int);

int main()
{
	int num, radix, result , conver;
	cout << "Enter a decimal number: ";
	cin >> num;
	cout << "Enter a radix for covertion: ";
	cin >> radix;

	conver = convertion(num, radix);
	result = flipping(conver);
	cout << "The number based " << radix << " is: " << result;
}
int convertion(int num, int radix) {
	int conver = 0;
	for (int i = 0; num > 0; i++) {
		int digit = num % radix;
		conver = conver * 10 + digit;
		num /= radix;
	}
	return conver;
}
int flipping(int conver) {
	int result = 0;
	for (int j = 0; conver > 0; j++) {
		int digit = conver % 10;
		result = result * 10 + digit;
		conver /= 10;
	}
	return result;
}*/

