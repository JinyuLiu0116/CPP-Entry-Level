//Write a program that prompts the user to enter a positive integer n, 
//then calculates and prints the sum of all numbers from 1 to n using a loop.
//
//#include <iostream>
//using namespace std;
//int sum(int);
//
//int main()
//{
//	int num;
//	cout << "Enter an integer: ";
//	cin >> num;
//	int result = sum(num);
//	cout << "The sum of all numbers from 1 to " << num << endl
//		<< "is: " << result;
//}
//int sum(int num) {
//	int sum = 0;
//	for (int i = 1; i <= num; i++)
//	{
//		sum = sum + i;
//	}
//	return sum;
//}

//Create a program that asks the user for an integer n and 
//calculates its factorial(n!) using a loop.Output the result.
//#include <iostream>
//using namespace std;
//int factorial(int);
//
//int main()
//{
//	int num;
//	cout << "Enter a integer number: ";
//	cin >> num;
//
//	int result = factorial(num);
//	cout << "The factorial is: " << result;
//}
//int factorial(int num) {
//	int factor = 1;
//	for (int i = 1; i <= num; i++)
//	{
//		factor *= i;
//	}
//	return factor;
//}

//#include <iostream>
//using namespace std;
//bool isPalindrome(int x);
//
//int main() {
//    int x;
//    cout << "Enter a number: ";
//    cin >> x;
//    bool result = isPalindrome(x);
//    cout << result;
//}
//bool isPalindrome(int x) {
//    int digit, result = 0, num = x;
//    for (int i = 1; x != 0; i++) {
//        digit = x % 10;
//        result = result * 10 + digit;
//        x /= 10;
//    }
//    //cout << result;
//    if (result == num) {
//        return true;
//        
//    }
//    else {
//        return false;
//    }
//}
//•	Write the program to get input from user and print numbers from 1 till the input.
//#include <iostream>
//using namespace std;
//
//void printNum(int);
//int main()
//{
//	int inputNum;
//	cout << "Enter a number: ";
//	cin >> inputNum;
//
//	printNum(inputNum);
//}
//void printNum(int num)
//{
//	if (num >= -1 && num <= 1)
//		cout << num << " invaild number.";
//	else if (num >= 1)
//	{
//		for (int i = 1; i <= num; i++)
//			cout << i << " ";
//	}
//	else
//	{
//		for (int i = 1; i >= num; i--)
//			cout << i << " ";
//	}
//}

//•	Write a program to get start and stop values from user and print all numbers from start till stop.
//#include <iostream>
//using namespace std;
//
//void printNum(int, int);
//int main()
//{
//	int startNum, stopNum;
//	cout << "Enter a start number and a stop number:";
//	cin >> startNum >> stopNum;
//	printNum(startNum, stopNum);
//}
//void printNum(int x, int y)
//{
//	if (x == y)
//		cout << "The two number are same.";
//	else if (x > y)
//	{
//		while (x >= y)
//		{
//			cout << x << " ";
//			x--;
//		}
//	}
//	else
//	{
//		while (x <= y)
//		{
//			cout << x << " ";
//			x++;
//		}
//	}
//
//}

//•	Print all numbers between start and stop which are, Odd, Multiples of 3, Even and multiples of 5.
//#include <iostream>
//using namespace std;
//
//void printNumber(int, int);
//int main()
//{
//	int startNum, stopNum;
//	cout << "Enter a strat number and a stop number: ";
//	cin >> startNum >> stopNum;
//	printNumber(startNum, stopNum);
//}
//void printNumber(int x, int y)
//{
//	if (x == y || x < 0 || y < 0)
//		cout << "The two numbers cannot be negative number or equal to each other.";
//	else
//	{
//		while (x <= y)
//		{
//			if (x % 2 != 0 || x % 3 == 0)
//				cout << x << " ";
//			if (x % 2 == 0 && x % 5 == 0)
//			{
//				cout << x << " ";
//			}
//			x++;
//		}
//	}
//
//}

//write program to print sum of first n odd numbers starting with 1 and ending with n (1 3 5 7 9 ...)
//#include <iostream>
//using namespace std;
//
//int sum(int);
//int main()
//{
//	int num;
//	cout << "Enter a number: ";
//	cin >> num;
//	cout << "The sum of first " << num << " is:" << sum(num);
//}
//int sum(int num) 
//{
//	int sum = 0;
//	for (int i = 1; i <= num; i++)
//	{
//		if (i % 2 != 0)
//			sum += i;
//	}
//	return sum;
//}

//write a program to find sum of series 1^2+2^2+3^2+4^2+...n^2
//#include <iostream>
//using namespace std;
//
//int sumSeries(int num)
//{	
//	int sum;
//	return sum = (num * (num + 1) * (2 * num + 1)) / 6.0;
//}
//int sumLoop(int);
//int main()
//{
//	int num;
//	cout << "Enter a number: ";
//	cin >> num;
//	cout << "Ther sum of series from 1-" << num << " is:" << sumSeries(num) << endl;
//	cout << "Ther sum of series from 1-" << num << " is:" << sumLoop(num) << endl;
//}
//int sumLoop(int num)
//{
//	int sum = 0;
//	for (int i = 1; i <= num; i++)
//	{
//		sum = sum + pow(i, 2);
//	}
//	return sum;
//}

//write a program to print factorial of a number
//#include <iostream>
//using namespace std;
//
//int factorial(int);
//int main()
//{
//	int num;
//	cout << "Enter a number: ";
//	cin >> num;
//	cout << "The factorial of " << num << " is:" << factorial(num);
//}
//int factorial(int num)
//{
//	int sum = 1;
//	for (int i = 1; i <= num; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}

//Write a program to print sum of the series below: Get n from the user.1 + 1 / 2 + 1 / 3 + 1 / 4 + ….1 / n
//#include <iostream>
//using namespace std;
//
//double sum(int);
//int main()
//{
//	int num;
//	cout << "Enter a number: ";
//	cin >> num;
//	cout << "Ther sum is: " << sum(num);
//}
//double sum(int num) 
//{
//	double sum = 1;
//	for (double i = 1.0; i <= num; i++)
//	{
//		sum = sum + 1 / i;
//	}
//	return sum;
//}

//Write a program to print Fibonacci series up to n terms excluding the first 2 values0 1 1 2 3 5 8…..
//#include <iostream>
//using namespace std;
//
//void fibonacci(int);
//int main()
//{
//	int num;
//	cout << "Enter a num: ";
//	cin >> num;
//	cout << "Ther Fibonacci series up to " << num << " is:";
//	fibonacci(num);
//}
//void fibonacci(int num)
//{
//	int first = 0, second = 1;
//	int next;
//	cout << "0 1 ";
//	while (num > 0)
//	{
//		next = first + second;
//		cout << next << " ";
//		first = second;
//		second = next;
//		num--;
//	}
//}

//write a program to convert a number from decimal to binary and vice versa
//#include <iostream>
//using namespace std;
//
//void conver(int, int);
//int main()
//{
//	int num, base;
//	cout << "Enter a number for conversion: ";
//	cin >> num;
//	cout << "Enter a base for the number you want to conver to:";
//	cin >> base;
//	conver(num, base);
//}
//void conver(int num, int base)
//{
//	int digit;
//	int result=0;
//	while (num != 0)
//	{
//		digit = num % base;
//		result = result * 10 + digit;
//		num /= base;
//	}
//	cout << result;
//}

#include <iostream>
using namespace std;

int main()
{
	int num;
	string result = "";
	cout << "Enter a number:";
	cin >> num;
	while (num > 0)
	{
		if (num % 2 == 0)
			result += "0";
		else
			result += "1";

		num /= 2;
	}
	for (int i = 0; i < result.size() - 1; i++)
		cout << result[i];
}