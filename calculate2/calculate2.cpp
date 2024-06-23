#include <iostream>
using namespace std;

void massage();
double add(double, double);
double subtract(double, double);
double multiply(double, double);
double divide(double, double);
double mudulus(double, double);
int main()
{
	double firstNum, secondNum;
	int num;
	char check;
	bool decision = true;

	do {
		massage();
		cin >> num;
		switch (num)
		{
		case 1:
			cout << "Enter your first number:";
			cin >> firstNum;
			cout << "Enter your second number:";
			cin >> secondNum;
			cout << firstNum << " + " << secondNum << " = " << add(firstNum, secondNum);
			break;
		case 2:
			cout << "Enter your first number:";
			cin >> firstNum;
			cout << "Enter your second number:";
			cin >> secondNum;
			cout << firstNum << " - " << secondNum << " = " << subtract(firstNum, secondNum);
			break;
		case 3:
			cout << "Enter your first number:";
			cin >> firstNum;
			cout << "Enter your second number:";
			cin >> secondNum;
			cout << firstNum << " * " << secondNum << " = " << multiply(firstNum, secondNum);
			break;
		case 4:
			cout << "Enter your first number:";
			cin >> firstNum;
			cout << "Enter your second number:";
			cin >> secondNum;
			cout << firstNum << " / " << secondNum << " = " << divide(firstNum, secondNum);
			break;
		case 5:
			cout << "Enter your first number:";
			cin >> firstNum;
			cout << "Enter your second number:";
			cin >> secondNum;
			cout << firstNum << " % " << secondNum << " = " << mudulus(firstNum, secondNum);
			break;
		default:
			cout << "Invalid input.";
		}
		cout << endl;
		cout << "Do you want to continue? (Y/N):";
		cin >> check;
		switch (check)
		{
		case 'y':
		case 'Y':
			decision = true;
			break;
		case 'n':
		case 'N':
			decision = false;
			break;
		default:
			cout << "Invalid input.";
		}

	} while (decision != false);
}
void massage() {
	cout << "Enter 1 for addition.\n";
	cout << "Enter 2 for subtraction.\n";
	cout << "Enter 3 for multiplcation.\n";
	cout << "Enter 4 for dividtion.\n";
	cout << "Enter 5 for mudulus.\n";
}
double add(double x, double y)
{

	return x + y;
}
double subtract(double x, double y)
{
	return x - y;
}
double multiply(double x, double y)
{
	return x * y;
}
double divide(double x, double y)
{
	return x / y;
}
double mudulus(double x, double y)
{
	return (int)x % (int)y;
}