/*#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int num, guess, count = 1;
	cout << "enter a number(1-10) to guess: ";
	cin >> guess;
	num = (rand() % 10) + 1;

	for (int i = 1; i <= 10; i++) {
		if (i == 1 && guess == num) {
			cout << "You win!";
		}
	}


}*/

//write a program coverts 127 to 721.
/*#include <iostream>
using namespace std;

int main()
{
	int input, digit, result = 0;
	cout << "number: ";
	cin >> input;

	while (input > 0) {
		digit = input % 10;
		//cout << digit << " " << input;
		result = result * 10 + digit;
		input = input / 10;
	}
		

	cout << result;
}*/


//number from b to d
/*#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num, result, numD = 0;
	cout << "enter a number for convertion: ";
	cin >> num;

	for (int i = 0; num > 0; i++) {
		result = num % 10;
		numD = numD + result * pow(2, i);
		num = num / 10;
	}
	cout << numD;


}*/

//Write a program to convert binary to decimal.Get binary number from user.Use functions.
#include <iostream>
using namespace std;

int main()
{
	int num, digit, convert, result = 0;
	cout << "Enter a binary number: ";
	cin >> num;
	for (int i = 0; num > 0; i++) 
	{
		digit = num % 10;
		convert = digit * pow(8, i);

		result = result + convert;
		num = num / 10;
	}
	cout << result;

}






//convert binary to decimal mulitipl base of 8.
//binary number / 10 
