//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main()
//{
//	char message[15];
//	cout << "Enter a message: ";
//	cin.getline(message, 15);
//	cout << "The message is" << message << endl;
//
//	for (int i = 0; i < strlen(message); i++)
//	{
//		cout << (char)toupper(message[i]);
//	}
//}

#include <iostream>
using namespace std;

void message()
{
	cout << "1. addition.\n";
	cout << "2. subtraction.\n";
	cout << "3. multipcation.\n";
	cout << "4. division.\n";
	cout << "5. mudule.\n";
}
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int divi(int x, int y)
{
	return x / (double)y;
}
int madul(int x, int y)
{
	return x % y;
}
void newLine()
{
	char symbol;
	do {
		cin.get(symbol);
	} while (symbol != '\n');
}
int main()
{
	int num;
	int first, second;
	char ans;
	do 
	{
		cout << "Enter a number to choose: \n";
		message();
		cin >> num;
		cout << "Enter two numbers for calculates: \n";
		cin >> first >> second;
		switch (num)
		{
		case 1: cout << add(first, second); break;
		case 2: cout << sub(first, second); break;
		case 3: cout << mul(first, second); break;
		case 4: cout << divi(first, second); break;
		case 5: cout << madul(first, second); break;
		default: cout << "invaild enter.";
		}
		cout << "\n Do you want to continute? (Y/N): ";
		cin >> ans;
		newLine();
	} while ((ans == 'Y') || (ans == 'y'));
	cout << "Bye.";
}
