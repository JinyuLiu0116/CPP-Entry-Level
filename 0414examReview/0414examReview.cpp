//Write the program to get input from user and print numbers from 1 till the input.
/*#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	while (num >= 1) {
		cout << num << " ";
		num--;
	}
}*/

//Write a program to get start and stop values from user and print all numbers from start till stop.
/*#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	cout << "Enter a start number: ";
	cin >> num1;
	cout << "Enter a stop number: ";
	cin >> num2;

	while (num1 <= num2) {
		cout << num1 << " ";
		num1++;
	}
}*/

//Print all lowercase alphabets from a to z
/*#include <iostream>
using namespace std;

int main() {
	char alph = 'a';
	while (alph <= 'z') {
		cout << alph << " ";
		alph++;
	}
}*/

//Print all numbers from stop to start.
/*#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	cout << "Enter a start number: ";
	cin >> num1;
	cout << "Enter a stop number: ";
	cin >> num2;

	while (num1 <= num2) {
		cout << num2 << " ";
		num2--;
	}
}*/

//Print all numbers between start and stop which are Odd |Multiples of 3 |Even and multiples of 5
/*#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	cout << "Enter a start number: ";
	cin >> num1;
	cout << "Enter a stop number: ";
	cin >> num2;
	
	while (num1 <= num2) {
		if (num1 % 3 == 0) {
			cout << num1 << " ";
		}
		else if (num1 % 2 != 0) {
			cout << num1 << " ";
		}
		if (num1 % 2 == 0 && num1 % 5 == 0) {
			cout << num1 << " ";
		}
		num1++;
	}
}*/

/*#include <iostream>
#include <cmath>
using namespace std;
int add(int);

int main() {
	int n, sum = 0;
	cout << "Enter a number: ";
	cin >> n;
	cout << "The sum is " << add(n);
}
int add(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		int result = pow(i, 2);
		sum += result;
	}
	return sum;
}*/

/*#include <iostream>
using namespace std;

int main() {
	int num, sum, num1 = 0, num2 = 1;
	cout << "Enter number of elements in serview: ";
	cin >> num;

	while (num > 0) {

		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		num--;
	}
	cout << num2;
	
}*/

/*#include <iostream>
using namespace std;
int add(int);

int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	cout << add(num);
}
int add(int num) {
	int sum = 0;
	for (int i = 1; num > 0; i++) {
		int digit = num % 10;
		sum += digit;
		num /= 10;
	}
	return sum;
}*/

//Prime number: get a number and check if number is prime or not.
/*#include <iostream>
using namespace std;
int prime(int);

int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	if (prime(num)) {
		cout << num << " is prime.";
	}
	else {
		cout << num << " is not prime.";
	}
}
int prime(int num) {
	for (int i = 2; i < num/2; i++) {
		if (num % i == 0) {
			return false;
			break;
		}
	}
	return true;
}*/

/*#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "enter a number: ";
	cin >> num;

	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= num-i; j++) {
			cout << " ";
		}
		for (int k = 1; k <= i; k++) {
			cout << "* ";
		}
		cout << endl;
	}
	for (int i2 = 1; i2 <= num-1; i2++) {
		for (int j2 = 1; j2 <= i2; j2++) {
			cout << " ";
		}
		for (int k2 = 1; k2 <=num-i2; k2++) {
			cout << "* ";
		}
		cout << endl;

	}

}*/

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num;
//	cout << "Enter a number:";
//	cin >> num;
//
//	for (int i = 1; i <= num; i++) {
//		for (int l = 1; l <= num - i; l++) {
//			cout << " ";
//		}
//		for (int j = 1; j <= i; j++) {
//			cout << "* ";
//		}
//		cout << endl;
//	}
//	for (int i2 = 1; i2 <= num; i2++) {
//		for (int l2 = 1; l2 <= i2; l2++) {
//			cout << " ";
//		}
//		for (int j2 = 1; j2 <= num - i2; j2++) {
//			cout << "* ";
//		}
//		cout << endl;
//	}
//}


//Reads in five scores and shows how much each
//score differs from the highest score.

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int score[5], higest;
//	cout << "Enter your score #1: ";
//	cin >> score[0];
//	higest = score[0];
//
//	for (int i = 1; i < 5; i++)
//	{
//		cout << "Enter your score #" << i + 1 << ": ";
//		cin >> score[i];
//		if (score[i] > higest) {
//			higest = score[i];
//		}
//	}
//	cout << endl;
//	cout << "The higest score is: " << higest << endl << endl;
//
//	for (int j = 0; j < 5; j++)
//	{
//		cout << "The difference between " << score[j]
//			<< " and " << higest << " is: " << higest - score[j] << endl;
//	}
//}

