#include <iostream>
using namespace std;

int main()
{
	char grade, check;
	//cout << "Enter your letter grade: ";
	//cin >> grade;

	do {
		cout << "Enter your letter grade: ";
		cin >> grade;
		switch (grade)
		{
		case 'A':
		case 'a':cout << "Good job! Your score is between 90-100."; break;
		case 'B':
		case 'b':cout << "Nice job! Your score is between 80-90."; break;
		case 'C':
		case 'c':cout << "Nice try! Your score is between 70-80."; break;
		case 'D':
		case 'd':cout << "You pass this class! Your score is between 60-70."; break;
		case 'F':
		case 'f':cout << "You need to work harder! You not pass this class."; break;
		default:cout << "Invalid input.";
		}
		cout << endl;
		cout << "Do you want to continue? (Y/N):";
		cin >> check;
	} while (check == 'y' || check == 'Y');
	cout << "Thank you for using.";
}
