//Write a program to get decimal number and convert to into any radix or base.
// -> get user input a decimal number
// -> get user input a radix
// -> get digit by decimal % radix
// -> digit * 10 + digit
// -> decimal number / radix
/*#include <iostream>
using namespace std;

int main()
{
	int num, radix, digit, result = 0, conver = 0;
	cout << "Enter a decimal number: ";
	cin >> num;
	cout << "Enter a radix for covertion: ";
	cin >> radix;

	for (int i = 0; num > 0; i++) {
		digit = num % radix;
		conver = conver * 10 + digit;
		num /= radix;
	}
	// -> the numb need to flip
	// -> numbe % 10 to get digit
	// -> digit *10 +digit
	// -> numble / 10
	for (int j = 0; conver > 0; j++) {
		int flip = conver % 10;
		result = result * 10 + flip;
		conver /= 10;
	}
	cout << result;
}*/

#include <iostream>
using namespace std;

int main()
{
	int x = 3;
	while (--x > 0) {
		cout << x;
	}
}
