//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//int main()
//{
	//int year[] = { 2022,2023,2024,2025 };


	////cout << year[0];
	//for (int i = 0; i < size(year); i++)
	//{
	//	cout << year[i] << endl;
	//}

	/*int number;
	cout << "How many cars do you have?: ";
	cin >> number;
	cin.ignore();

	string* pCars = new string[number];

	for (int i = 0; i < number; i++) {
		cout << "Enter car #" << i + 1 << endl;
		getline(cin, pCars[i]);
	}
	cout << "Here is your garage." << endl;
	for (int i = 0; i < number; i++) {
		cout << "#" << i + 1 << ": " << pCars[i] << endl;
	}
}*/

//#include <iostream>
//using namespace std;
//
//void showBalance(double balance);
//double deposit();
//double withDraw(double balance);
//
//int main()
//{
//	double balance = 0;
//	int choice = 0;
//
//	do {
//		cout << "Enter your choice: \n";
//		cout << endl;
//		cout << "1. Show Balanve\n";
//		cout << "2. Deposit Money\n";
//		cout << "3. Withdraw Money\n";
//		cout << "4. Exit\n";
//		cin >> choice;
//		switch (choice) {
//			case 1: showBalance(balance);
//				break;
//			case 2: balance += deposit();
//				break;
//			case 3: balance -= withDraw(balance);
//				break;
//			case 4:cout << "Thanks for visiting.";
//				break;
//			default:cout << "Invalid choice.";
//		}
//	}
//}
//void showBalance(double balance) {
//	cout
//}
//double deposit() {
//	return 0;
//}
//double withDraw(double balance) {
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num, sum = 0;
//	cout << "enter the number of the array: ";
//	cin >> num;
//	int* pArray = new int [num];
//	
//	for (int i = 0; i < num; i++)
//	{
//		cout << "Enter the #" << i + 1 << " : ";
//		cin >> pArray[i];
//		sum += pArray[i];
//	}
//	cout << sum/num;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num, max = 0;
//	cout << "Enter numbers of your array: ";
//	cin >> num;
//	int* pArray = new int[num];
//
//	for (int i = 0; i < num; i++)
//	{
//		cout << "Enter #" << i + 1 << " element of your array: ";
//		cin >> pArray[i];
//	}
//	for (int i = 0; i < num - 1; i++)
//	{
//		if (pArray[i] < pArray[i + 1])
//		{
//			max = pArray[i + 1];
//		}
//		else
//			max = pArray[i];
//	}
//	cout << max;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num, array[50];
//	
//	for (int i = 0; i < 50; i++)
//	{
//		array[i] = rand() % 51;
//	}
//	cout << "Enter a number: ";
//	cin >> num;
//	for (int i = 0; i < 50; i++)
//	{
//		if (num == array[i])
//		{
//			cout << num << " is located at #" << i + 1 << " of the array.";
//			break;
//		}
//	}
//}

#include <iostream>
#include <ctime>
using namespace std;

void assignArray(int array[], int SIZE);
void sortArray(int, int);

int main()
{
	const int SIZE = 20;
	int array[SIZE];

	for (int i = 0; SIZE > 0; i++)
	{
		cout << assignArray(array, SIZE);
	}
	

}
void assignArray(int array[], int SIZE)
{
	for (int i = 0; SIZE > 0; i++)
	{
		array[i] = rand() % 21;
	}
}
void sortArray(int, int)
{

}